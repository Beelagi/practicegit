#include "speaker_test.h"
#include "ui_speaker_test.h"
#include "test_screen.h"
#include <QMediaPlayer>
#include <QComboBox>
#include <QProcess>
#include <QDebug>
#include <QThread>
#include <QFile>

class GPIOControl
{
public:
    static bool setGPIOValue(const QString &gpioFilePath, const QString &value)
    {
        QFile gpioFile(gpioFilePath);
        if (gpioFile.open(QIODevice::WriteOnly | QIODevice::Text))
        {
            QTextStream out(&gpioFile);
            out << value;
            gpioFile.close();
            return true;
        }
        else
        {
            qDebug() << "Failed to open GPIO file for writing.";
            return false;
        }
    }
};


SPEAKER_TEST::SPEAKER_TEST(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::SPEAKER_TEST)
{
    ui->setupUi(this);
}

SPEAKER_TEST::~SPEAKER_TEST()
{
    delete ui;
}

void SPEAKER_TEST::on_close_audio_volume_clicked()
{
    hide();
    if (parentWidget())
    {
        parentWidget()->show();
    }
}

void SPEAKER_TEST::enableGPIO()
{
    GPIOControl::setGPIOValue("/sys/class/gpio/gpio18/value", "1");
}

void SPEAKER_TEST::disableGPIO()
{
    GPIOControl::setGPIOValue("/sys/class/gpio/gpio18/value", "0");
}

void SPEAKER_TEST::on_thank_you_clicked()
{
    enableGPIO();

    QProcess::execute("aplay /home/root/HW_Interface/media/ThankYou.wav");

    QThread::msleep(500);

    disableGPIO();

}

void SPEAKER_TEST::on_access_granted_clicked()
{
    enableGPIO();

    QProcess::execute("aplay /home/root/HW_Interface/media/AccessGranted.wav");

    QThread::msleep(500);

    disableGPIO();

}

void SPEAKER_TEST::on_access_denied_clicked()
{
    enableGPIO();

    QProcess::execute("aplay /home/root/HW_Interface/media/AccessDenied.wav");

    QThread::msleep(500);

    disableGPIO();
}

class VolumeControl
{
public:
    static bool setVolume(const QString &rdacPath, int volume)
    {
        QFile rdacFile(rdacPath);
        if (rdacFile.open(QIODevice::WriteOnly | QIODevice::Text))
        {
            QTextStream out(&rdacFile);
            out << volume;
            rdacFile.close();
            return true;
        }
       /* else
        {
            qDebug() << "Failed to open RDAC file for writing.";
            return false;
        }*/
    }
};

void SPEAKER_TEST::on_volume_change_activated(const QString &arg1)
{
    int vol = arg1.toInt();

        if (vol >= 1 && vol <= 14)
        {
            if (vol >= 1 && vol <= 9)
            {
                vol = (10 - vol) * 25;
            }
            else
            {
                switch (vol)
                {
                    case 10: vol = 20; break;
                    case 11: vol = 15; break;
                    case 12: vol = 10; break;
                    case 13: vol = 5; break;
                    case 14: vol = 0; break;
                    default:
                        qDebug() << "wrong settings";
                        return;
                }
            }
            VolumeControl::setVolume("/sys/bus/i2c/devices/1-002f/rdac0", vol);
            VolumeControl::setVolume("/sys/bus/i2c/devices/1-002f/rdac1", vol);
            VolumeControl::setVolume("/sys/bus/i2c/devices/0-002f/rdac0", vol);
            VolumeControl::setVolume("/sys/bus/i2c/devices/0-002f/rdac1", vol);
        }
        else
        {
            qDebug() << "Invalid volume setting";
        }
}




