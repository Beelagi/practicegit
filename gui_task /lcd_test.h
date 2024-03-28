#ifndef LCD_TEST_H
#define LCD_TEST_H
#include "touch_test.h"
#include <QComboBox>
#include <QFile>
#include <QTextStream>
#include <QDebug>

#include <QMainWindow>

class COLOR_TEST;
class TOUCH_TEST;

namespace Ui {
class LCD_TEST;
}

class LCD_TEST : public QMainWindow
{
    Q_OBJECT

public:
    explicit LCD_TEST(QWidget *parent = 0);
    ~LCD_TEST();

private slots:

    void on_color_test_clicked();

    void on_brightness_level_activated(const QString &arg1);

    void on_touch_test_clicked();

    void on_close_lcd_window_clicked();

private:
    Ui::LCD_TEST *ui;
    COLOR_TEST *color_window;
    TOUCH_TEST *touch_window;
};

#endif // LCD_TEST_H
