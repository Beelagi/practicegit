#ifndef ETHERNET_H
#define ETHERNET_H
#include "keyboard.h"
#include "second_keyboard.h"
#include "third_keyboard.h"
#include <QMainWindow>

class KEYBOARD;
class SECOND_KEYBOARD;
class THIRD_KEYBOARD;

namespace Ui {
class ETHERNET;
}

class ETHERNET : public QMainWindow
{
    Q_OBJECT

public:
    explicit ETHERNET(QWidget *parent = 0);
    ~ETHERNET();

private slots:
    void on_close_ethernet_clicked();

    void openKeyboardWindow();

    void open_second_KeyboardWindow();

    void open_third_KeyboardWindow();

    bool eventFilter(QObject *object, QEvent *event);

    void on_ping_button_clicked();

public slots:
    void onOkButtonClicked(const QString &text);

    void onOkButtonClicked_second_keyboard(const QString &text);

    void onOkButtonClicked_third_keyboard(const QString &text);

private:
    Ui::ETHERNET *ui;
    KEYBOARD *keyboardWindow;
    SECOND_KEYBOARD *second_keyboard_window;
    THIRD_KEYBOARD *third_keyboard_window;

    //bool eventFilter(QObject *object, QEvent *event);
};

#endif // ETHERNET_H
