#ifndef RFID_TEST_H
#define RFID_TEST_H

#include <QMainWindow>
#include <QThread>
#include <sys/time.h>
#include "CardConnectionThread.h"

class CardConnectionThread;  // Forward declaration


extern "C" {
#include "cdac_header.h"
}

namespace Ui {
class RFID_test;
}

class RFID_test : public QMainWindow
{
    Q_OBJECT

public:
    explicit RFID_test(QWidget *parent = 0);

    CardConnectionThread *cardThread;

    void printUid(const QString &uidString);

    void printTechnology(const QString &technologyString);

    void printSak(const QString &sakString);

    void printType(const QString &typeString);

    ~RFID_test();

protected:


private slots:
    void on_close_rfid_window_clicked();

    void on_connecting_to_CL_card_clicked();

    void on_disconnecting_to_CL_card_clicked();


public slots:

    void onCardInfoDetected(const QString& cardInfo);

    void errorCheckForConnectCLCard(uint32_t retValue);

    void selectMFandEF();


signals:

private:
    Ui::RFID_test *ui;
};

#endif // RFID_TEST_H
