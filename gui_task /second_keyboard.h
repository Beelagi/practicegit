#ifndef SECOND_KEYBOARD_H
#define SECOND_KEYBOARD_H

#include <QMainWindow>
#include <QWidget>
#include <QLineEdit>

namespace Ui {
class SECOND_KEYBOARD;
}

class SECOND_KEYBOARD : public QMainWindow
{
    Q_OBJECT

public:
    explicit SECOND_KEYBOARD(QLineEdit *lineEdit,QWidget *parent = 0);
    ~SECOND_KEYBOARD();

private slots:
    void onAlphabetButtonClicked();

    void on_close_pushButton_clicked();

    void on_ok_pushButton_clicked();

    void on_backspace_pushButton_clicked();

signals:
    void okButtonClicked_second_keyboard(const QString &text);

private:
    Ui::SECOND_KEYBOARD *ui;
};

#endif // SECOND_KEYBOARD_H
