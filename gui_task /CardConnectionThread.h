#ifndef CARDCONNECTIONTHREAD_H
#define CARDCONNECTIONTHREAD_H
#include "rfid_test.h"

#include <QThread>

extern "C" {
#include "cdac_header.h"
}

class CardConnectionThread : public QThread
{
    Q_OBJECT

public:
    CardConnectionThread(QObject *parent = nullptr);

    QString byteArrayToHexString(const uint8_t* byteArray, int size);

    void run() override;

signals:
    void cardInfoDetected(const QString& cardInfo);

    void cardStatusChanged(uint32_t status);

    void nextProcess();
};


#endif // CARDCONNECTIONTHREAD_H
