#ifndef SCREEN_H
#define SCREEN_H

#include <QMainWindow>
#include "test_screen.h"
#include "QWidget"

class TEST_SCREEN;

namespace Ui {
class SCREEN;
}

class SCREEN : public QMainWindow
{
    Q_OBJECT

public:
    explicit SCREEN(QWidget *parent = 0);
    ~SCREEN();

private slots:

    void on_open_new_window_clicked();

private:
    Ui::SCREEN *ui;
    //MainWindow *screen_window;
    TEST_SCREEN *screen_window;
};

#endif // SCREEN_H
