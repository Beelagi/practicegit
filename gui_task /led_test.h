#ifndef LED_TEST_H
#define LED_TEST_H

#include <QMainWindow>

namespace Ui {
class LED_TEST;
}

class LED_TEST : public QMainWindow
{
    Q_OBJECT

public:
    explicit LED_TEST(QWidget *parent = 0);
    ~LED_TEST();

private slots:
    void on_close_led_clicked();

    void on_red_led_clicked();

    void on_off_led_1_clicked();

    void on_green_led_clicked();

    void turnOnLED(const QString &ledFilePath);

    void turnOffLED(const QString &ledFilePath);

    void on_yellow_led_clicked();

    void on_green_led_1_clicked();

    void on_off_led_2_clicked();

private:
    Ui::LED_TEST *ui;
};

#endif // LED_TEST_H
