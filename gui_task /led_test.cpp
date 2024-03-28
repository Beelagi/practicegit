#include "led_test.h"
#include "ui_led_test.h"
#include "test_screen.h"
#include <QPushButton>
#include <QFile>
#include <QDebug>


LED_TEST::LED_TEST(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::LED_TEST)
{
    ui->setupUi(this);
}

LED_TEST::~LED_TEST()
{
    delete ui;
}

void LED_TEST::on_close_led_clicked()
{
    hide();
    if (parentWidget())
    {
        parentWidget()->show();
    }
}

void LED_TEST::on_red_led_clicked()
{
    turnOnLED("/sys/class/gpio/gpio108/value");
}

void LED_TEST::on_green_led_clicked()
{
    turnOnLED("/sys/class/gpio/gpio89/value");
}

void LED_TEST::on_off_led_1_clicked()
{
    turnOffLED("/sys/class/gpio/gpio108/value");
    turnOffLED("/sys/class/gpio/gpio89/value");
}

void LED_TEST::on_yellow_led_clicked()
{
    turnOnLED("/sys/class/gpio/gpio114/value");
}

void LED_TEST::on_green_led_1_clicked()
{
    turnOnLED("/sys/class/gpio/gpio113/value");
}

void LED_TEST::on_off_led_2_clicked()
{
    turnOffLED("/sys/class/gpio/gpio113/value");
    turnOffLED("/sys/class/gpio/gpio114/value");
}


void LED_TEST::turnOnLED(const QString &ledFilePath)
{
    QFile ledFile(ledFilePath);
    if (ledFile.open(QIODevice::WriteOnly | QIODevice::Text))
    {
        QTextStream out(&ledFile);
        out << "1";
        ledFile.close();
    }
    else
    {
        qDebug() << "Failed to open LED brightness file for writing.";
    }
}

void LED_TEST::turnOffLED(const QString &ledFilePath)
{
    QFile ledFile(ledFilePath);
    if (ledFile.open(QIODevice::WriteOnly | QIODevice::Text))
    {
        QTextStream out(&ledFile);
        out << "0";
        ledFile.close();
    }
    else
    {
        qDebug() << "Failed to open LED brightness file for writing.";
    }
}
