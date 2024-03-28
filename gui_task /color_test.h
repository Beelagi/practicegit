#ifndef COLOR_TEST_H
#define COLOR_TEST_H

#include <QMainWindow>

namespace Ui {
class COLOR_TEST;
}

class COLOR_TEST : public QMainWindow
{
    Q_OBJECT

public:
    explicit COLOR_TEST(QWidget *parent = 0);
    ~COLOR_TEST();

private slots:
    void on_close_color_test_clicked();

private:
    Ui::COLOR_TEST *ui;
};

#endif // COLOR_TEST_H
