#include "ethernet.h"
#include "ui_ethernet.h"
#include "test_screen.h"
#include "keyboard.h"
#include <QString>
ETHERNET::ETHERNET(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::ETHERNET),keyboardWindow(nullptr),second_keyboard_window(nullptr),third_keyboard_window(nullptr)
{
    ui->setupUi(this);

    ui->ip_address->installEventFilter(this);
    ui->gateway->installEventFilter(this);
    ui->ping_url->installEventFilter(this);

    if(!keyboardWindow)
    {
        keyboardWindow = new KEYBOARD(ui->ip_address, this);
    }
    connect(keyboardWindow, &KEYBOARD::okButtonClicked, this, &ETHERNET::onOkButtonClicked);


    if(!second_keyboard_window)
    {
        second_keyboard_window = new SECOND_KEYBOARD(ui->gateway,this);
    }
    connect(second_keyboard_window, &SECOND_KEYBOARD::okButtonClicked_second_keyboard, this, &ETHERNET::onOkButtonClicked_second_keyboard);


    if(!third_keyboard_window)
    {
        third_keyboard_window = new THIRD_KEYBOARD(ui->ping_url,this);
    }
    connect(third_keyboard_window, &THIRD_KEYBOARD::okButtonClicked_third_keyboard, this, &ETHERNET::onOkButtonClicked_third_keyboard);

    qDebug() << "Connected KEYBOARD signal to ETHERNET slot.";
}

void ETHERNET::onOkButtonClicked(const QString &text)
{
    ui->ip_address->setText(text);
    qDebug() << "Received signal in ETHERNET. Updated ip_address with text:" << text;
}

void ETHERNET::onOkButtonClicked_second_keyboard(const QString &text)
{
    ui->gateway->setText(text);
    qDebug() << "Received signal in ETHERNET. Updated gateway with text:" << text;
}

void ETHERNET::onOkButtonClicked_third_keyboard(const QString &text)
{
    ui->ping_url->setText(text);
    qDebug() << "Received signal in ETHERNET. Updated gateway with text:" << text;
}

ETHERNET::~ETHERNET()
{
    delete ui;
}


void ETHERNET::openKeyboardWindow()
{
    if(ui->ip_address)
    {
        keyboardWindow->show();
    }
}

void ETHERNET::open_second_KeyboardWindow()
{
    if(ui->gateway)
    {
        second_keyboard_window->show();
    }
}

void ETHERNET::open_third_KeyboardWindow()
{
    if(ui->ping_url)
    {
        third_keyboard_window->show();
    }
}

bool ETHERNET::eventFilter(QObject *object, QEvent *event)
{
    if (object == ui->ip_address && event->type() == QEvent::MouseButtonPress)
    {
        openKeyboardWindow();
    }

    if(object == ui->gateway && event->type() == QEvent::MouseButtonPress)
    {
        open_second_KeyboardWindow();
    }

    if(object == ui->ping_url && event->type() == QEvent::MouseButtonPress)
    {
        open_third_KeyboardWindow();
    }

    return QMainWindow::eventFilter(object, event);
}

void ETHERNET::on_close_ethernet_clicked()
{
    hide();
    if (parentWidget())
    {
            parentWidget()->show();
    }
}




void ETHERNET::on_ping_button_clicked()
{
    QString ipAddress = ui->ping_url->text().trimmed();

        if (ipAddress.isEmpty())
        {
            QMessageBox::warning(this, "Empty IP Address", "Please enter an IP address before pinging.");
            return;
        }

        QString command = "ping -c 5 " + ipAddress;
        QProcess process;
        process.start(command);
        process.waitForFinished(5000);

        if (process.state() == QProcess::Running)
        {
            process.terminate();
            process.waitForFinished();

            ui->result->setText("Ping timeout (5 seconds), Host is unreachable or an error occurred.");
        }
        else
        {
            QByteArray result_1 = process.readAllStandardOutput();

            ui->result->setText(result_1);
        }
}
