#ifndef RECOMMENDED_STANDARD_H
#define RECOMMENDED_STANDARD_H

#include <QMainWindow>
#include <QFile>

namespace Ui {
class Recommended_standard;
}

class Recommended_standard : public QMainWindow
{
    Q_OBJECT

public:
    explicit Recommended_standard(QWidget *parent = 0);

    void gpio_init();

    void set_gpio(int val);

    int32_t openUART();

    void closeDeviceDescriptor();

    int myOwnOpenAPI(const char *__file, int __oflag);

    int32_t getTemiosBaudRate(uint8_t devBaudRate);

    int32_t setInterfaceAttribs(int32_t fd, int32_t speed, int32_t parity, int32_t waitTime);

    int32_t Perform_Test();

    void onAlphabetButtonClicked();

    int32_t writeData(char *buff, size_t bytes);

    int readData(char *buff, uint32_t pendingByte);

    int32_t Perform_Test_1();

    ~Recommended_standard();

private slots:
    void on_Init_clicked();

    void on_write_clicked();

    void on_read_clicked();

    void on_close_clicked();

    void on_pushButton_backspace_clicked();

    void on_pushButton_enter_clicked();

private:
    Ui::Recommended_standard *ui;
};

#endif // RECOMMENDED_STANDARD_H
