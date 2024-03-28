#ifndef KEYBOARD_H
#define KEYBOARD_H

#include <QMainWindow>
#include <QWidget>
#include <QLineEdit>

namespace Ui {
class KEYBOARD;
}

class KEYBOARD : public QMainWindow
{
    Q_OBJECT

public:
     explicit KEYBOARD(QLineEdit *lineEdit,QWidget *parent = 0);
    ~KEYBOARD();

private slots:

    void on_close_pushButton_clicked();

    void on_ok_pushButton_clicked();

    void onAlphabetButtonClicked();

    void on_backspace_pushButton_clicked();

signals:
    void okButtonClicked(const QString &text);

private:
    Ui::KEYBOARD *ui;
};

#endif // KEYBOARD_H
