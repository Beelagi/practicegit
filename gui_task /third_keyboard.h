#ifndef THIRD_KEYBOARD_H
#define THIRD_KEYBOARD_H

#include <QMainWindow>
#include <QWidget>
#include <QLineEdit>

namespace Ui {
class THIRD_KEYBOARD;
}

class THIRD_KEYBOARD : public QMainWindow
{
    Q_OBJECT

public:
    explicit THIRD_KEYBOARD(QLineEdit *lineEdit,QWidget *parent = 0);
    ~THIRD_KEYBOARD();

private slots:
    void on_close_pushButton_clicked();

    void on_ok_pushButton_clicked();

    void on_backspace_pushButton_clicked();

    void onAlphabetButtonClicked();

signals:
    void okButtonClicked_third_keyboard(const QString &text);

private:
    Ui::THIRD_KEYBOARD *ui;
};

#endif // THIRD_KEYBOARD_H
