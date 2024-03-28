#ifndef SPEAKER_TEST_H
#define SPEAKER_TEST_H

#include <QMainWindow>

namespace Ui {
class SPEAKER_TEST;
}

class SPEAKER_TEST : public QMainWindow
{
    Q_OBJECT

public:
    explicit SPEAKER_TEST(QWidget *parent = 0);
    ~SPEAKER_TEST();

private slots:
    void on_close_audio_volume_clicked();

    void on_thank_you_clicked();

    void on_volume_change_activated(const QString &arg1);

    void on_access_granted_clicked();

    void enableGPIO();

    void disableGPIO();

    void on_access_denied_clicked();

private:
    Ui::SPEAKER_TEST *ui;
};

#endif // SPEAKER_TEST_H
