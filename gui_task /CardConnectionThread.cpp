#include <QApplication>
#include "CardConnectionThread.h"
#include "rfid_test.h"
#include <QDebug>
int interrupt;


CardConnectionThread::CardConnectionThread(QObject *parent): QThread(parent)
{
}

void CardConnectionThread::run()
{
    uint32_t status;
    struct data cardParam;


    qDebug() << "************************ Connecting ****************************************";
    while(interrupt)
    {
        status = ConnectCLCard(&cardParam);

        if((cardParam.detectionStatus == 0) && (status == 0))
        {
            QString cardInfoString = "UID: " + byteArrayToHexString(cardParam.uid,cardParam.uidSize)
                                   + " Type: " + QString::number(cardParam.type)
                                   + " Technology: " + QString::number(cardParam.technology)
                                   + " SAK: " + QString::number(cardParam.sak);

            emit cardInfoDetected(cardInfoString);
            emit nextProcess();
            QThread::msleep(100);
        }
        else if(status == NO_CARD_PRESENT)
        {
            QThread::msleep(1000);
            continue;
        }

        else
        {
            emit cardStatusChanged(status);
            break;
        }
        QThread::sleep(5);
        break;
    }
}


QString CardConnectionThread::byteArrayToHexString(const uint8_t *data, int size)
{
    QString result;
    for (int i = 0; i < size; ++i)
    {
        result += QString("%1").arg(data[i], 2, 16, QLatin1Char('0')).toUpper();

        if (i < size - 1)
            result += " ";
    }
    return result;
}

