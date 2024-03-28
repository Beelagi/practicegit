#include "relay_test.h"
#include "ui_relay_test.h"
#include "test_screen.h"

RELAY_TEST::RELAY_TEST(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::RELAY_TEST)
{
    ui->setupUi(this);
}

RELAY_TEST::~RELAY_TEST()
{
    delete ui;
}


void RELAY_TEST::on_relay1_on_clicked()
{
    relay1_on();
    ui->relay_status->setText("Relay-1 ON");
}


void RELAY_TEST::relay1_on()
{
    int fd, i;
    struct manrel manrel;
    time_t T;
    struct tm tm;
    fd = open("/dev/manrel", O_RDONLY);

    if (fd == -1)
    {
        perror("Error opening /dev/manrel");
        return;
    }

    manrel.status = 1;
    T = time(NULL);
    tm = *localtime(&T);
    sprintf(manrel.key, "%02d:%02d:%02d\n", tm.tm_hour, tm.tm_min, tm.tm_sec);

    i = ioctl(fd, RELAY1, &manrel);

    if (i == -1)
    {
        perror("Error calling ioctl");
    }
    ::close(fd);
}


void RELAY_TEST::on_relay1_off_clicked()
{
    relay1_off();
    ui->relay_status->setText("Relay-1 OFF");
}


void RELAY_TEST::relay1_off()
{
    int fd, i;
    struct manrel manrel;
    time_t T;
    struct tm tm;
    fd = open("/dev/manrel", O_RDONLY);

    if (fd == -1)
    {
        perror("Error opening /dev/manrel");
        return;
    }

    manrel.status = 0;
    T = time(NULL);
    tm = *localtime(&T);
    sprintf(manrel.key, "%02d:%02d:%02d\n", tm.tm_hour, tm.tm_min, tm.tm_sec);

    i = ioctl(fd, RELAY1, &manrel);

    if (i == -1)
    {
        perror("Error calling ioctl");
    }
    ::close(fd);
}

void RELAY_TEST::on_relay2_on_clicked()
{
    relay2_on();
    ui->relay_status->setText("Relay-2 ON");
}

void RELAY_TEST::relay2_on()
{
    int fd, i;
    struct manrel manrel;
    time_t T;
    struct tm tm;
    fd = open("/dev/manrel", O_RDONLY);

    if (fd == -1)
    {
        perror("Error opening /dev/manrel");
        return;
    }

    manrel.status = 1;
    T = time(NULL);
    tm = *localtime(&T);
    sprintf(manrel.key, "%02d:%02d:%02d\n", tm.tm_hour, tm.tm_min, tm.tm_sec);
    i = ioctl(fd, RELAY2, &manrel);

    if (i == -1)
    {
        perror("Error calling ioctl");
    }

    ::close(fd);
}

void RELAY_TEST::on_relay2_off_clicked()
{
    relay2_off();
    ui->relay_status->setText("Relay-2 OFF");
}

void RELAY_TEST::relay2_off()
{
    int fd, i;
    struct manrel manrel;
    time_t T;
    struct tm tm;
    fd = open("/dev/manrel", O_RDONLY);

    if (fd == -1)
    {
        perror("Error opening /dev/manrel");
        return;
    }

    manrel.status = 0;
    T = time(NULL);
    tm = *localtime(&T);
    sprintf(manrel.key, "%02d:%02d:%02d\n", tm.tm_hour, tm.tm_min, tm.tm_sec);
    i = ioctl(fd, RELAY2, &manrel);

    if (i == -1)
    {
        perror("Error calling ioctl");
    }

    ::close(fd);
}

void RELAY_TEST::on_close_relay_window_clicked()
{
    hide();
    if (parentWidget())
    {
        parentWidget()->show();
    }
}
