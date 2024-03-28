#include "rfid_test.h"
#include "ui_rfid_test.h"
#include "test_screen.h"
#include <QTimer>
extern int interrupt;
int flag = 0;

#define STATUS_OK 0
QByteArray createMfArray = QByteArray::fromHex("00e0000009620783023f00820138");
QByteArray createEfArray = QByteArray::fromHex("00e0000013621183025f0182010180020c00880150088a0105");
QByteArray selectMfArray = QByteArray::fromHex("00a40000023f00");
QByteArray selectEfArray = QByteArray::fromHex("00a40000025f01");
QByteArray readBytesArray = QByteArray::fromHex("00B000000400");
QByteArray clearCardArray = QByteArray::fromHex("000e0000");

RFID_test::RFID_test(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::RFID_test)
{
    ui->setupUi(this);
    cardThread = new CardConnectionThread(this);
    connect(cardThread, &CardConnectionThread::cardInfoDetected, this, &RFID_test::onCardInfoDetected);
    connect(cardThread, &CardConnectionThread::nextProcess, this, &RFID_test::selectMFandEF);
    connect(cardThread, &CardConnectionThread::cardStatusChanged, this, &RFID_test::errorCheckForConnectCLCard);
}

RFID_test::~RFID_test()
{
    delete ui;
}

void RFID_test::on_close_rfid_window_clicked()
{
    flag = 0;
    interrupt = 0;
    cardThread->quit();
    hide();
    TEST_SCREEN *main_window = new TEST_SCREEN(this);
    main_window->show();
}

void RFID_test::on_connecting_to_CL_card_clicked()
{
    int ret_val;
    ret_val = initLibsNfcCard();
    if(ret_val == 0)
    {
        qDebug() << "\nInit Process Sucess";
    }

    ui->rfid_textEdit->setText("Please Tap the Card\nConnecting...");
    if(flag == 1)
    {
        ui->rfid_textEdit->append("Waiting...");
    }
    interrupt = 1;
    flag = 1;
    cardThread->start();

}


void RFID_test::on_disconnecting_to_CL_card_clicked()
{
    cardThread->wait(3000);
    flag = 0;
    interrupt = 0;
    cardThread->quit();
    ui->rfid_textEdit->clear();
}


void RFID_test::onCardInfoDetected(const QString& cardInfo)
{
    qDebug() << "\n**** Printing Card Information......";
    ui->rfid_textEdit->append("The card is detected.\nPrinting Card Information.");

    int uidIndex = cardInfo.indexOf("UID:");
    int typeIndex = cardInfo.indexOf("Type:");
    int techIndex = cardInfo.indexOf("Technology:");
    int sakIndex = cardInfo.indexOf("SAK:");

    if (uidIndex != -1 && typeIndex != -1 && techIndex != -1 && sakIndex != -1)
    {
        QString uidString = cardInfo.mid(uidIndex + QString("UID:").length(), typeIndex - uidIndex - QString("UID:").length()).trimmed();
        QString typeString = cardInfo.mid(typeIndex + QString("Type:").length(), techIndex - typeIndex - QString("Type:").length()).trimmed();
        QString techString = cardInfo.mid(techIndex + QString("Technology:").length(), sakIndex - techIndex - QString("Technology:").length()).trimmed();
        QString sakString = cardInfo.mid(sakIndex + QString("SAK:").length()).trimmed();

        printTechnology(techString);
        printUid(uidString);
        printSak(sakString);
        printType(typeString);
    }
    else
    {
        qDebug() << "UID, Type, Technology, or SAK information not found in the cardInfo string.";
    }

    qDebug() << "\n------------------------------------";

}



void RFID_test::printTechnology(const QString &technologyString)
{
    QString techText;

    if (technologyString == "1")
    {
        techText = "Technology: Type A";
    }
    else if (technologyString == "2")
    {
        techText = "Technology: Type B";
    }
    else if (technologyString == "3")
    {
        techText = "Technology: Type F";
    }
    else if (technologyString == "4")
    {
        techText = "Technology: Type V / ISO 15693 / T5T";
    }
    else if (technologyString == "5")
    {
        techText = "Technology: ISO 18000p3m3 / EPC Gen2";
    }
    else
    {
        techText = "Unknown Tech.";
    }

    qDebug()  << qPrintable(techText);
    ui->rfid_textEdit->append(techText);
}



void RFID_test::printUid(const QString &uidString)
{
    qDebug().noquote() << "UID : " << uidString;
    ui->rfid_textEdit->append("UID : " + uidString);
}



void RFID_test::printSak(const QString &sakString)
{
    bool conversionOk;
    int sakValue = sakString.toInt(&conversionOk);


    if (conversionOk)
    {
        QString hexSakString = QString("SAK: 0x%1").arg(sakValue, 2, 16, QLatin1Char('0')).toUpper();
        qDebug() << qPrintable(hexSakString);
        ui->rfid_textEdit->append(hexSakString);
    }
    else
    {
        qDebug() << "Error converting SAK string to hexadecimal.";
    }
}


void RFID_test::printType(const QString &typeString)
{
    bool conversionOk;
    int type = typeString.toInt(&conversionOk);

    if (conversionOk)
    {
        switch(type)
        {
            case 1:
                qDebug() << "Type: Type 1 Tag";
                ui->rfid_textEdit->append("Type: Type 1 Tag");
                break;
            case 2:
                qDebug() << "Type: Type 2 Tag";
                ui->rfid_textEdit->append("Type: Type 2 Tag");
                break;
            case 3:
                qDebug() << "Type: Type 3 Tag";
                ui->rfid_textEdit->append("Type: Type 3 Tag");
                break;
            case 4:
                qDebug() << "Type: Type 4A Tag";
                ui->rfid_textEdit->append("Type: Type 4A Tag");
                break;
            case 5:
                qDebug() << "Type: Type P2P";
                ui->rfid_textEdit->append("Type: Type P2P");
                break;
            case 6:
                qDebug() << "Type: Type NFC_DEP and  4A Tag";
                ui->rfid_textEdit->append("Type: Type NFC_DEP and  4A Tag");
                break;
            default :
                qDebug() << "Unknown Type: " << qPrintable(typeString);
                ui->rfid_textEdit->append("Unknown Type: " + typeString);
        }
    }
    else
    {
        qDebug() << "Error converting Type string to integer: " << qPrintable(typeString);
        ui->rfid_textEdit->append("Error converting Type string to integer: " + typeString);
    }
}

void RFID_test::errorCheckForConnectCLCard(uint32_t retValue)
{
    switch (retValue)
    {
        case ERROR_ON_PHHALHW_FIELDOFF:
            qDebug() << "Error Occurred on phhal field off function.";
            break;
        case ERROR_ON_PHHAL_WAIT:
            qDebug() << "Error Occurred on phhal wait function.";
            break;
        case ERROR_ON_CONFIGURING_DISCOVERY_LOOP:
            qDebug() << "Error Occurred on configuring discovery loop.";
            break;
        case FAILED_TO_GET_CARD_DETAILS:
            qDebug() << "Card detected but failed to get details.";
            break;
        case LIBRARY_NOT_INITIALIZED:
            qDebug() << "Library is not initialized.";
            break;
        default:
            qDebug() << QString("Line %1, function %2 meant not to be printed. Return value of code is %3")
                            .arg(__LINE__).arg(__FUNCTION__).arg(retValue);
    }
}

void RFID_test::selectMFandEF()
{
    uint32_t status;
    int i;
    unsigned int receiveFromClLength;
    unsigned char receiveFromCl[2048];
    unsigned int  transmitToClLength;
    qDebug() << "\n**** Selecting MF......";
    ui->rfid_textEdit->append("\nSelect MF Command :");
    transmitToClLength = selectMfArray.size();
    qDebug() << "Sending Command as follows..";
    qDebug() << "---------------------------";

    QString commandString;
    for (int i = 0; i < transmitToClLength; i++)
    {
        commandString += QString("%1 ").arg(static_cast<quint8>(selectMfArray.at(i)), 2, 16, QChar('0'));
    }
    qDebug() << qPrintable(commandString);
    ui->rfid_textEdit->append(commandString);

    qDebug() << "---------------------------";

    status = TransceiveCL(reinterpret_cast<unsigned char*>(selectMfArray.data()), transmitToClLength, receiveFromCl, &receiveFromClLength);
    if (status == STATUS_OK)
    {
        qDebug() << "\n ###########  Response #############";
        QString responseString;
        for (int i = 0; i < receiveFromClLength; i++)
        {
            responseString += QString("%1 ").arg(static_cast<quint8>(*(receiveFromCl + i)), 2, 16, QChar('0'));
        }
        qDebug() << qPrintable(responseString);
        ui->rfid_textEdit->append("\nSelect MF command success");
        ui->rfid_textEdit->append("Response : " + responseString);
    }
    else
    {
        qDebug() << "Error Occurred while Selecting MF.";
        ui->rfid_textEdit->append("Error Occurred while Selecting MF.");
    }


    qDebug() << "\n**** Selecting EF......";
    ui->rfid_textEdit->append("\nSelect EF Command :");
    transmitToClLength = selectEfArray.size();
    qDebug() << "Sending Command as follows..";
    qDebug() << "---------------------------";

    QString commandStringEF;
    for (int i = 0; i < transmitToClLength; i++)
    {
        commandStringEF += QString("%1 ").arg(static_cast<quint8>(selectEfArray.at(i)), 2, 16, QChar('0'));
    }
    qDebug() << qPrintable(commandStringEF);
    ui->rfid_textEdit->append(commandStringEF);
    qDebug() << "---------------------------";

    status = TransceiveCL(reinterpret_cast<unsigned char*>(selectEfArray.data()), transmitToClLength, receiveFromCl, &receiveFromClLength);
    if (status == STATUS_OK)
    {
        qDebug() << "\n ###########  Response #############";
        QString responseStringEF;
        for (int i = 0; i < receiveFromClLength; i++)
        {
            responseStringEF += QString("%1 ").arg(static_cast<quint8>(*(receiveFromCl + i)), 2, 16, QChar('0'));
        }
        qDebug() << qPrintable(responseStringEF);
        ui->rfid_textEdit->append("\nSelect EF command success");
        ui->rfid_textEdit->append("Response : " + responseStringEF);
    }
    else
    {
        qDebug() << "Error Occurred while Selecting EF.";
        ui->rfid_textEdit->append("Error Occurred while Selecting EF.");
    }


    qDebug() << "\n------------Reading  data from CL card ---------------";
    ui->rfid_textEdit->append("\nRead data Command:");
    transmitToClLength = readBytesArray.size();
    qDebug() << "Sending Command as follow..";
    qDebug() << "---------------------------";

    QString commandStringRead;
    for (int i = 0; i < transmitToClLength; i++)
    {
        commandStringRead += QString("%1 ").arg(static_cast<quint8>(readBytesArray.at(i)), 2, 16, QChar('0'));
    }
    qDebug() << qPrintable(commandStringRead);
    ui->rfid_textEdit->append(commandStringRead);

    struct timeval stop, start;

    gettimeofday(&start, NULL);
    status = TransceiveCL(reinterpret_cast<unsigned char*>(readBytesArray.data()), transmitToClLength, receiveFromCl, &receiveFromClLength);
    gettimeofday(&stop, NULL);
    qDebug() << "took" << (stop.tv_sec - start.tv_sec) * 1000000 + stop.tv_usec - start.tv_usec << "us";
    if (status == STATUS_OK)
    {

        qDebug() << "\n############# Response ###################:";
        QString responseStringRead;
        for (int i = 0; i < receiveFromClLength; i++)
        {
            responseStringRead += QString("%1 ").arg(static_cast<quint8>(*(receiveFromCl + i)), 2, 16, QChar('0'));
        }
        qDebug() << qPrintable(responseStringRead);
        qDebug() << "\nRead" << receiveFromClLength << "bytes..";
        ui->rfid_textEdit->append("\nRead data command success");
        ui->rfid_textEdit->append("Response : " + responseStringRead);
        ui->rfid_textEdit->append("Total " + QString::number(receiveFromClLength) + " bytes read successfully.");
    }
    else
    {
        qDebug() << "\nError Occurred while Reading back from the card.";
        ui->rfid_textEdit->append("Error Occurred while Reading back from the card.");
    }
    flag = 0;
    interrupt = 0;
    cardThread->quit();
}



