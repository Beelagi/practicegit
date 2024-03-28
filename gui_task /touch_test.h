#ifndef TOUCH_TEST_H
#define TOUCH_TEST_H

#include <QMainWindow>

namespace Ui {
class TOUCH_TEST;
}

class TOUCH_TEST : public QMainWindow
{
    Q_OBJECT

public:
    explicit TOUCH_TEST(QWidget *parent = 0);
    ~TOUCH_TEST();

private slots:
    void on_pushButton_4_clicked();

    void on_touch_test_1_clicked();

    void on_touch_test_2_clicked();

    void on_touch_test_3_clicked();

    void on_touch_test_4_clicked();

    void on_touch_test_5_clicked();

private:
    Ui::TOUCH_TEST *ui;
};

#endif // TOUCH_TEST_H
