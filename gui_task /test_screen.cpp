#include "test_screen.h"
#include "ui_test_screen.h"
#include "home.h"



TEST_SCREEN::TEST_SCREEN(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::TEST_SCREEN),home_window(nullptr),lcd_window(nullptr),led_window(nullptr),speaker_window(nullptr),relay_window(nullptr)
{
    ui->setupUi(this);

    QScrollArea *scrollArea1 = findChild<QScrollArea*>("scrollArea");
    if (scrollArea1)
    {
        scrollArea1->viewport()->setAttribute(Qt::WA_AcceptTouchEvents);

    }

    ui->home->setStyleSheet("QPushButton { text-align: left; padding-left: 10px; font-size: 23px; font-family: 'Segoe UI'; }");
    ui->lcd_test->setStyleSheet("QPushButton { text-align: left; padding-left: 10px; font-size: 23px; font-family: 'Segoe UI'; }");
    ui->relay_test->setStyleSheet("QPushButton { text-align: left; padding-left: 10px; font-size: 23px; font-family: 'Segoe UI'; }");
    ui->speaker_test->setStyleSheet("QPushButton { text-align: left; padding-left: 10px; font-size: 23px; font-family: 'Segoe UI'; }");
    ui->led_test->setStyleSheet("QPushButton { text-align: left; padding-left: 10px; font-size: 23px; font-family: 'Segoe UI'; }");
    ui->sam_test->setStyleSheet("QPushButton {  text-align: left; padding-left: 10px; font-size: 23px; font-family: 'Segoe UI'; }");
    ui->RFID_test->setStyleSheet("QPushButton {  text-align: left; padding-left: 10px; font-size: 23px; font-family: 'Segoe UI'; }");
    ui->finger_capture->setStyleSheet("QPushButton { text-align: left; padding-left: 10px; font-size: 23px; font-family: 'Segoe UI'; }");
    ui->ethernet->setStyleSheet("QPushButton { text-align: left; padding-left: 10px; font-size: 23px; font-family: 'Segoe UI'; }");
    ui->rs_485->setStyleSheet("QPushButton { text-align: left; padding-left: 10px; font-size: 23px; font-family: 'Segoe UI'; }");
    ui->weigand_test->setStyleSheet("QPushButton {  text-align: left; padding-left: 10px; font-size: 23px; font-family: 'Segoe UI'; }");
    ui->close->setStyleSheet("QPushButton { text-align: left; padding-left: 10px; font-size: 23px; font-family: 'Segoe UI'; }");


    gpioInit();

}

TEST_SCREEN::~TEST_SCREEN()
{
    delete ui;
}

bool TEST_SCREEN::event(QEvent *event)
{
    if (event->type() == QEvent::MouseButtonPress || event->type() == QEvent::MouseMove) {
        QMouseEvent *mouseEvent = static_cast<QMouseEvent*>(event);
        if (mouseEvent->buttons() & Qt::LeftButton) {
            if (event->type() == QEvent::MouseButtonPress) {
                m_lastPos = mouseEvent->pos();
                event->accept();
            } else if (event->type() == QEvent::MouseMove) {
                QPoint currentPos = mouseEvent->pos(); // Use QPoint directly
                QPoint delta(currentPos.x() - m_lastPos.x(), currentPos.y() - m_lastPos.y()); // Calculate delta
                QScrollArea *scrollArea = findChild<QScrollArea*>("scrollArea");
                if (scrollArea) {
                    scrollArea->verticalScrollBar()->setValue(scrollArea->verticalScrollBar()->value() - delta.y());
                    scrollArea->horizontalScrollBar()->setValue(scrollArea->horizontalScrollBar()->value() - delta.x());
                }
                m_lastPos = currentPos;
                event->accept();
            }
        }
    }
    return QMainWindow::event(event);
}


void TEST_SCREEN::gpioInit()
{
    QList<int> gpioPins;
    gpioPins.push_back(89);
    gpioPins.push_back(114);
    gpioPins.push_back(113);
    gpioPins.push_back(108);
    gpioPins.push_back(118);
    gpioPins.push_back(46);
    gpioPins.push_back(30);
    gpioPins.push_back(109);
    gpioPins.push_back(44);
    gpioPins.push_back(42);
    gpioPins.push_back(40);
    gpioPins.push_back(31);
    gpioPins.push_back(8);
    gpioPins.push_back(91);
    gpioPins.push_back(92);
    gpioPins.push_back(18);

    for (int i = 0; i < gpioPins.size(); ++i)
    {
        configureGPIO(gpioPins.at(i));
    }

}


void TEST_SCREEN::configureGPIO(int pin)
{
    char cmd[100];
    int ret = 0;
    int fd = open(QString("/sys/class/gpio/gpio%1/direction").arg(pin).toUtf8().constData(), O_RDWR);

    if (fd < 0)
    {
        qDebug() << pin << " not exist";

        bzero(cmd, 100);
        sprintf(cmd, "echo %d > /sys/class/gpio/export", pin);
        ret = system(cmd);

        sprintf(cmd, "echo out > /sys/class/gpio/gpio%d/direction", pin);
        ret = system(cmd);
    }
    else
    {
        //qDebug() << "fd is" << fd;
        ::close(fd);
    }

    sleep(0.1);
}

void TEST_SCREEN::on_home_clicked()
{
    hide();
    if(!home_window)
    {
        home_window = new home(this);
    }
    home_window->show();
}

void TEST_SCREEN::on_lcd_test_clicked()
{
    hide();
    if(!lcd_window)
    {
        lcd_window = new LCD_TEST(this);
    }

    lcd_window->show();
}

void TEST_SCREEN::on_relay_test_clicked()
{
    hide();
    if(!relay_window)
    {
        relay_window = new RELAY_TEST(this);
    }

    relay_window->show();
}

void TEST_SCREEN::on_speaker_test_clicked()
{
    hide();
    if(!speaker_window)
    {
        speaker_window = new SPEAKER_TEST(this);
    }

    speaker_window->show();
}

void TEST_SCREEN::on_led_test_clicked()
{
    hide();
    if(!led_window)
    {
        led_window = new LED_TEST(this);
    }

    led_window->show();
}

void TEST_SCREEN::on_sam_test_clicked()
{
    hide();
    sam_window = new SAM_TEST(this);
    sam_window->show();
}

void TEST_SCREEN::on_RFID_test_clicked()
{
    hide();
    rfid_window = new RFID_test(this);
    rfid_window->show();
}

void TEST_SCREEN::on_finger_capture_clicked()
{
    hide();
    fp_capture_window = new FINGER_PRINT_CAPTURE(this);
    fp_capture_window->show();
}

void TEST_SCREEN::on_ethernet_clicked()
{
    hide();
    address_window = new ETHERNET(this);
    address_window->show();
}

void TEST_SCREEN::on_rs_485_clicked()
{
    hide();
    window = new Recommended_standard(this);
    window->show();
}

void TEST_SCREEN::on_weigand_test_clicked()
{

}

void TEST_SCREEN::on_close_clicked()
{
    hide();
    SCREEN *screen_close = new SCREEN(this);
    screen_close->show();
}
