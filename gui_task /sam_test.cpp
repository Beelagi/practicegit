#include "sam_test.h"
#include "ui_sam_test.h"
#include "test_screen.h"
#include <QDebug>

#define STATUS_OK1 0

QByteArray createMfArray_1 = QByteArray::fromHex("00e0000009620783023f00820138");
QByteArray createEfArray_1 = QByteArray::fromHex("00e0000013621183025f0182010180020c00880150088a0105");
QByteArray selectMfArray_1 = QByteArray::fromHex("00a40000023f00");
QByteArray selectEfArray_1 = QByteArray::fromHex("00a40000025f01");
QByteArray readBytesArray_1 = QByteArray::fromHex("00B0000000400");
QByteArray clearCardArray_1 = QByteArray::fromHex("000e0000");

SAM_TEST::SAM_TEST(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::SAM_TEST)
{
    ui->setupUi(this);
    connect(this, &SAM_TEST::cardInitializedSignal, this, &SAM_TEST::onCardInitialized);
}

SAM_TEST::~SAM_TEST()
{
    delete ui;
}


void SAM_TEST::on_close_sam_test_clicked()
{
    hide();
    TEST_SCREEN *window = new TEST_SCREEN(this);
    window->show();
}

void SAM_TEST::on_init_process_clicked()
{
    ui->sam_textEdit->clear();
    unsigned char rx_buffer_ct[BUFFER_LEN] = {0};
    memset(rx_buffer_ct,'\0', BUFFER_LEN);
    ATR.retBuff=rx_buffer_ct;

    selectVoltageForSamCard(1);

    int ret_val = InitCT(&ATR);

    if (ret_val != 0)
    {
        errorCheckForInitCt(ret_val);
        ui->sam_textEdit->append(QString("Init Process Fail: %1\n").arg(ret_val));
        return;
    }
    else
    {
        ui->sam_textEdit->append("Init CT card done.\n");
        qDebug() << "Init Success\n";
        emit cardInitializedSignal();
    }
}


void SAM_TEST::errorCheckForInitCt(int retValue)
{
    switch (retValue)
    {
        case HARDWARE_NOT_VALID:
            qDebug() << "Hardware is not valid. Failed to Init.\n";
            break;

        case ERROR_IN_OPENING_FILE:
            qDebug() << "Failed to open file.\n";
            break;

        case COLD_RESET_FAILED:
            qDebug() << "Cold reset Failed. \n";
            break;

        case GET_ATR_FAILED:
            qDebug() << "Failed to get ATR bytes.\n";
            break;

        case SET_PROTOCOL_FAILED:
            qDebug() << "Failed to set protocol. \n";
            break;

        case SIM_SET_TIMING_FAILED:
            qDebug() << "Failed to set timinig for card.\n";
            break;

        case SET_BAUD_FAILED:
            qDebug() << "Failed to set Baud rate .\n";
            break;
        case SENDING_PPS_FAILED:
            qDebug() << "Failed to send PPS .\n";
            break;
        case GETTING_PPS_FAILED:
            qDebug() << "Getting response after PPS failed.\n";
            break;
        case SEND_T1_CMD_FAILED:
            qDebug() << "Command sending for T1 failed.\n";
            break;
        case RECEIVE_ERROR_AFTER_SENDING_T1_CMD:
            qDebug() << "receiving error after sending T1.\n";
            break;
        case SAM_NOT_PRESENT:
            qDebug() << "SAM card is not present.\n";
            break;
        case SAM_ALREADY_INITIALISED:
            qDebug() << "SAM card is already Initialized.\n";
            break;
        default:
            qDebug() << "Line" << __LINE__ << ", function" << Q_FUNC_INFO << "meant not to be printed. Return value of code is" << retValue;

    }

}


void SAM_TEST::on_CT_commands_clicked()
{
    if (!isCardInitialized())
    {
        ui->sam_textEdit->append("Please initialize the card first.\n");
        return;
    }

    uint32_t status;

    //uint32_t receiveFromClLength = 0;
    //char receiveFromCl[2048];
    //uint32_t  transmitToClLength;

    uint32_t  receiveFromClLength = 0;
    unsigned char receiveFromCl[2048];
    uint32_t   transmitToClLength;
    qDebug() << "\n**** Selecting MF......";
    ui->sam_textEdit->append("\nSelect MF Command :");
    transmitToClLength = selectMfArray_1.size();
    qDebug() << "Sending Command as follows..";
    qDebug() << "---------------------------";

    QString commandString;
    for (int i = 0; i < transmitToClLength; i++)
    {
        commandString += QString("%1 ").arg(static_cast<quint8>(selectMfArray_1.at(i)), 2, 16, QChar('0'));
    }
    qDebug() << qPrintable(commandString);
    ui->sam_textEdit->append(commandString);

    qDebug() << "---------------------------";

    status = TransceiveCT(reinterpret_cast<unsigned char*>(selectMfArray_1.data()), transmitToClLength, receiveFromCl, &receiveFromClLength);
    if(status == STATUS_OK1)
    {
        qDebug() << "\n ###########  Response #############";
        QString responseString;
        for (int i = 0; i < receiveFromClLength; i++)
        {
            responseString += QString("%1 ").arg(static_cast<quint8>(*(receiveFromCl + i)), 2, 16, QChar('0'));
        }
        qDebug() << qPrintable(responseString);
        ui->sam_textEdit->append("\nSelect MF command success");
        ui->sam_textEdit->append("Response : " + responseString);
    }
    else
    {
        qDebug() << "Error Occurred while Selecting MF.";
        ui->sam_textEdit->append("Error Occurred while Selecting MF.");
    }


    qDebug() << "\n**** Selecting EF......";
    ui->sam_textEdit->append("\nSelect EF Command :");
    transmitToClLength = selectEfArray_1.size();
    qDebug() << "Sending Command as follows..";
    qDebug() << "---------------------------";

    QString commandStringEF;
    for (int i = 0; i < transmitToClLength; i++)
    {
        commandStringEF += QString("%1 ").arg(static_cast<quint8>(selectEfArray_1.at(i)), 2, 16, QChar('0'));
    }
    qDebug() << qPrintable(commandStringEF);
    ui->sam_textEdit->append(commandStringEF);
    qDebug() << "---------------------------";

    status = TransceiveCT(reinterpret_cast<unsigned char*>(selectEfArray_1.data()), transmitToClLength, receiveFromCl, &receiveFromClLength);
    if(status == STATUS_OK1)
    {
        qDebug() << "\n ###########  Response #############";
        QString responseStringEF;
        for (int i = 0; i < receiveFromClLength; i++)
        {
            responseStringEF += QString("%1 ").arg(static_cast<quint8>(*(receiveFromCl + i)), 2, 16, QChar('0'));
        }
        qDebug() << qPrintable(responseStringEF);
        ui->sam_textEdit->append("\nSelect EF command success");
        ui->sam_textEdit->append("Response : " + responseStringEF);
    }
    else
    {
        qDebug() << "Error Occurred while Selecting EF.";
        ui->sam_textEdit->append("Error Occurred while Selecting EF.");
    }


    qDebug() << "\n------------Reading  data from CL card ---------------";
    ui->sam_textEdit->append("\nRead data Command:");
    transmitToClLength = readBytesArray_1.size();
    qDebug() << "Sending Command as follow..";
    qDebug() << "---------------------------";

    QString commandStringRead;
    for (int i = 0; i < transmitToClLength; i++)
    {
        commandStringRead += QString("%1 ").arg(static_cast<quint8>(readBytesArray_1.at(i)), 2, 16, QChar('0'));
    }
    qDebug() << qPrintable(commandStringRead);
    ui->sam_textEdit->append(commandStringRead);

    //struct timeval stop, start;

    //gettimeofday(&start, NULL);
    status = TransceiveCT(reinterpret_cast<unsigned char*>(readBytesArray_1.data()), transmitToClLength, receiveFromCl, &receiveFromClLength);
    //gettimeofday(&stop, NULL);
    //qDebug() << "took" << (stop.tv_sec - start.tv_sec) * 1000000 + stop.tv_usec - start.tv_usec << "us";
    if (status == STATUS_OK1)
    {

        qDebug() << "\n############# Response ###################:";
        QString responseStringRead;
        for (int i = 0; i < receiveFromClLength; i++)
        {
            responseStringRead += QString("%1 ").arg(static_cast<quint8>(*(receiveFromCl + i)), 2, 16, QChar('0'));
        }
        qDebug() << qPrintable(responseStringRead);
        ui->sam_textEdit->append("\nRead data command success");
        ui->sam_textEdit->append("Response : " + responseStringRead);


        unsigned int transmitToClLength_1;
        transmitToClLength_1 = transmitToCl.size();
        QString commandStringRead_1;
        for (int i = 0; i < transmitToClLength_1; i++)
        {
            commandStringRead += QString("%1 ").arg(static_cast<quint8>(readBytesArray_1.at(i)), 2, 16, QChar('0'));
            if(i == 288)
                break;
        }
        qDebug() << qPrintable(commandStringRead);

        ui->sam_textEdit->append("Total " + QString::number(transmitToClLength_1) + " bytes read successfully.");
        qDebug() << "\nRead" << transmitToClLength_1 << "bytes..";
    }
    else
    {
        qDebug() << "\nError Occurred while Reading back from the card.";
        ui->sam_textEdit->append("Error Occurred while Reading back from the card.");
    }

}


bool SAM_TEST::isCardInitialized() const
{
    return m_cardInitialized;
}

void SAM_TEST::onCardInitialized()
{
    m_cardInitialized = true;
}
