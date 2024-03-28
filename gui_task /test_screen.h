#ifndef TEST_SCREEN_H
#define TEST_SCREEN_H

#include <QMainWindow>
#include "screen.h"
#include "home.h"
#include "lcd_test.h"
#include "led_test.h"
#include "speaker_test.h"
#include "relay_test.h"
#include "ethernet.h"
#include "keyboard.h"
#include "sam_test.h"
#include "rfid_test.h"
#include "finger_print_capture.h"
#include "recommended_standard.h"


#include <QFile>
#include <QProcess>
#include <QDebug>
#include <unistd.h>
#include <fcntl.h>
#include <QMessageBox>
#include <QWheelEvent>
#include <QScrollBar>

class home;
class LCD_TEST;
class LED_TEST;
class SPEAKER_TEST;
class RELAY_TEST;
class ETHERNET;


namespace Ui {
class TEST_SCREEN;
}

class TEST_SCREEN : public QMainWindow
{
    Q_OBJECT

public:
    explicit TEST_SCREEN(QWidget *parent = 0);
    ~TEST_SCREEN();

protected:
    bool event(QEvent *event) override;

private slots:
    void gpioInit();

    void configureGPIO(int pin);

    void on_home_clicked();

    void on_lcd_test_clicked();

    void on_relay_test_clicked();

    void on_speaker_test_clicked();

    void on_led_test_clicked();

    void on_sam_test_clicked();

    void on_RFID_test_clicked();

    void on_finger_capture_clicked();

    void on_ethernet_clicked();

    void on_rs_485_clicked();

    void on_weigand_test_clicked();

    void on_close_clicked();

private:
    Ui::TEST_SCREEN *ui;
    QPointF m_lastPos;

    LCD_TEST *lcd_window;
    LED_TEST *led_window;
    SPEAKER_TEST *speaker_window;
    RELAY_TEST *relay_window;
    ETHERNET *address_window;
    SAM_TEST *sam_window;
    RFID_test *rfid_window;
    FINGER_PRINT_CAPTURE *fp_capture_window;
    Recommended_standard *window;
    home *home_window;

};

#endif // TEST_SCREEN_H
