#ifndef RELAY_TEST_H
#define RELAY_TEST_H
#include <fcntl.h>
#include <unistd.h>
#include <sys/ioctl.h>
#include <time.h>
#define RELAY1 1
#define RELAY2 3

struct manrel
{
    int status;
    char key[100];
};

#include <QMainWindow>

namespace Ui {
class RELAY_TEST;
}

class RELAY_TEST : public QMainWindow
{
    Q_OBJECT

public:
    explicit RELAY_TEST(QWidget *parent = 0);
    ~RELAY_TEST();

private slots:
    void on_close_relay_window_clicked();

    void on_relay1_on_clicked();

    void relay1_on();

    void on_relay1_off_clicked();

    void relay1_off();

    void on_relay2_on_clicked();

    void relay2_on();

    void on_relay2_off_clicked();

    void relay2_off();

private:
    Ui::RELAY_TEST *ui;
};

#endif // RELAY_TEST_H
