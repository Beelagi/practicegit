#include "lcd_test.h"
#include "ui_lcd_test.h"
#include "test_screen.h"
#include "color_test.h"
//#include <QtGui/QLabel>


LCD_TEST::LCD_TEST(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::LCD_TEST),color_window(nullptr)
{
    ui->setupUi(this);
}

LCD_TEST::~LCD_TEST()
{
    delete ui;
}

void LCD_TEST::on_close_lcd_window_clicked()
{
    hide();
    if (parentWidget())
    {
        parentWidget()->show();
    }
}

void LCD_TEST::on_touch_test_clicked()
{
    hide();
    touch_window = new TOUCH_TEST(this);
    touch_window->show();
}

void LCD_TEST::on_color_test_clicked()
{
    hide();
    if(!color_window)
    {
        color_window = new COLOR_TEST(this);
    }

    color_window->show();
}

void LCD_TEST::on_brightness_level_activated(const QString &arg1)
{
    bool conversionOk;
    int brightnessLevel = arg1.toInt(&conversionOk);

    if (!conversionOk)
    {
        qDebug() << "Failed to convert brightness level to an integer.";
        return;
    }

    QString brightnessFilePath = "/sys/class/backlight/backlight/brightness";

    QFile brightnessFile(brightnessFilePath);
    if (brightnessFile.open(QIODevice::WriteOnly | QIODevice::Truncate | QIODevice::Text))
    {
        QTextStream out(&brightnessFile);
        out << brightnessLevel;
        brightnessFile.close();
    }
    else
    {
        qDebug() << "Failed to open brightness file for writing.";
    }
}


