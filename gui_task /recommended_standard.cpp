#include "recommended_standard.h"
#include "ui_recommended_standard.h"
#include "test_screen.h"


int ret = 0;
#include <stdlib.h>
#include <unistd.h>
#include <string.h>
#include <fcntl.h>
#include <stdarg.h>

#include <errno.h>
#include <limits.h>
#include <termios.h>
#include <time.h>
#include <arpa/inet.h>
#include <stdbool.h>
#include <sys/time.h>
#include <sys/types.h>


#define SUCCESS  0
#define INVLD_FD                    -1
#define BUFF_DATA_LEN               92200 // 92160 (Raw Image Size)+ 40
#define DEV_PATH_NAME_LEN           50
#define DEFAULT_TIMEOUT             120
#define RSP_FIX_HEADER_LEN          500 //7
#define ERR_TIMEOUT_OCCUR           -1
#define ERR_DEVICE_NOT_PRESENT      -2
#define MSOUNDBOX_115200            0
#define MSOUNDBOX_1000000           1
#define BAUDRATE_9600              2


static unsigned int file_size = 0;
static char file_name[50];
static bool isRead = true, isTxProcFailed = false;
static int32_t gDeviceFd = INVLD_FD;


Recommended_standard::Recommended_standard(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::Recommended_standard)
{
    ui->setupUi(this);
    ui->textEdit_rs485->setReadOnly(true);


     connect(ui->a_pushButton, &QPushButton::clicked, this, &Recommended_standard::onAlphabetButtonClicked);
     connect(ui->b_pushButton, &QPushButton::clicked, this, &Recommended_standard::onAlphabetButtonClicked);
     connect(ui->c_pushButton, &QPushButton::clicked, this, &Recommended_standard::onAlphabetButtonClicked);
     connect(ui->d_pushButton, &QPushButton::clicked, this, &Recommended_standard::onAlphabetButtonClicked);
     connect(ui->e_pushButton, &QPushButton::clicked, this, &Recommended_standard::onAlphabetButtonClicked);
     connect(ui->f_pushButton, &QPushButton::clicked, this, &Recommended_standard::onAlphabetButtonClicked);
     connect(ui->g_pushButton, &QPushButton::clicked, this, &Recommended_standard::onAlphabetButtonClicked);
     connect(ui->h_pushButton, &QPushButton::clicked, this, &Recommended_standard::onAlphabetButtonClicked);
     connect(ui->i_pushButton, &QPushButton::clicked, this, &Recommended_standard::onAlphabetButtonClicked);
     connect(ui->j_pushButton, &QPushButton::clicked, this, &Recommended_standard::onAlphabetButtonClicked);
     connect(ui->k_pushButton, &QPushButton::clicked, this, &Recommended_standard::onAlphabetButtonClicked);
     connect(ui->l_pushButton, &QPushButton::clicked, this, &Recommended_standard::onAlphabetButtonClicked);
     connect(ui->m_pushButton, &QPushButton::clicked, this, &Recommended_standard::onAlphabetButtonClicked);
     connect(ui->n_pushButton, &QPushButton::clicked, this, &Recommended_standard::onAlphabetButtonClicked);
     connect(ui->o_pushButton, &QPushButton::clicked, this, &Recommended_standard::onAlphabetButtonClicked);
     connect(ui->p_pushButton, &QPushButton::clicked, this, &Recommended_standard::onAlphabetButtonClicked);
     connect(ui->q_pushButton, &QPushButton::clicked, this, &Recommended_standard::onAlphabetButtonClicked);
     connect(ui->r_pushButton, &QPushButton::clicked, this, &Recommended_standard::onAlphabetButtonClicked);
     connect(ui->s_pushButton, &QPushButton::clicked, this, &Recommended_standard::onAlphabetButtonClicked);
     connect(ui->t_pushButton, &QPushButton::clicked, this, &Recommended_standard::onAlphabetButtonClicked);
     connect(ui->u_pushButton, &QPushButton::clicked, this, &Recommended_standard::onAlphabetButtonClicked);
     connect(ui->v_pushButton, &QPushButton::clicked, this, &Recommended_standard::onAlphabetButtonClicked);
     connect(ui->w_pushButton, &QPushButton::clicked, this, &Recommended_standard::onAlphabetButtonClicked);
     connect(ui->x_pushButton, &QPushButton::clicked, this, &Recommended_standard::onAlphabetButtonClicked);
     connect(ui->y_pushButton, &QPushButton::clicked, this, &Recommended_standard::onAlphabetButtonClicked);
     connect(ui->z_pushButton, &QPushButton::clicked, this, &Recommended_standard::onAlphabetButtonClicked);

     connect(ui->pushButton_1, &QPushButton::clicked, this, &Recommended_standard::onAlphabetButtonClicked);
     connect(ui->pushButton_2, &QPushButton::clicked, this, &Recommended_standard::onAlphabetButtonClicked);
     connect(ui->pushButton_3, &QPushButton::clicked, this, &Recommended_standard::onAlphabetButtonClicked);
     connect(ui->pushButton_4, &QPushButton::clicked, this, &Recommended_standard::onAlphabetButtonClicked);
     connect(ui->pushButton_5, &QPushButton::clicked, this, &Recommended_standard::onAlphabetButtonClicked);
     connect(ui->pushButton_6, &QPushButton::clicked, this, &Recommended_standard::onAlphabetButtonClicked);
     connect(ui->pushButton_7, &QPushButton::clicked, this, &Recommended_standard::onAlphabetButtonClicked);
     connect(ui->pushButton_0, &QPushButton::clicked, this, &Recommended_standard::onAlphabetButtonClicked);
}

void Recommended_standard::onAlphabetButtonClicked()
{
    if(ret == 0)
    {
        ui->lineEdit_rs485->clear();
        ui->lineEdit_rs485->setText("Please press the init.");
        ui->textEdit_rs485->setReadOnly(true);
        return;
    }

    QPushButton *clickedButton = qobject_cast<QPushButton*>(sender());
    if (clickedButton)
    {
        QString buttonText = clickedButton->text();
        ui->textEdit_rs485->insertPlainText(buttonText);
    }
}


Recommended_standard::~Recommended_standard()
{
    delete ui;
}

void Recommended_standard::on_Init_clicked()
{
    int32_t ret_1;
    ret_1 = openUART();
    if(ret_1 < 0)
    {
        qDebug() << "Failed in open Uart\n";
        ui->lineEdit_rs485->setText("Failed in open Uart\n");
        return;
    }
    ui->lineEdit_rs485->setText("Connected");
    ret = 1;
}

int32_t Recommended_standard::openUART()
{
    uint8_t ret = SUCCESS;
    char errMessage[50] = {0}, lDevPath[13] = {0}, path[1035] = {0};

    snprintf(lDevPath, sizeof(lDevPath), "/dev/ttymxc2");
    /* Close if already opened*/
    qDebug() << "lDevPath:%s\n" << lDevPath;
    closeDeviceDescriptor();

    gDeviceFd = myOwnOpenAPI(lDevPath, O_RDWR | O_NOCTTY | O_NDELAY | O_CLOEXEC);
    if(INVLD_FD == gDeviceFd)
    {
        memset(errMessage, 0, sizeof(errMessage));
        snprintf(errMessage, sizeof(errMessage), "Failed to open device [%s]\n", lDevPath);
        return -1;
    }


    ret = setInterfaceAttribs(gDeviceFd, getTemiosBaudRate(MSOUNDBOX_115200), 0, 5);

    if(SUCCESS != ret)
    {
        qDebug() << "Failed in setInterfaceAttribs\n";
        return -2;
    }

    return 0;
}


void Recommended_standard::closeDeviceDescriptor()
{
    if (gDeviceFd != INVLD_FD)
    {
        ::close(gDeviceFd);
        gDeviceFd = INVLD_FD;
    }
}

int Recommended_standard::myOwnOpenAPI(const char *__file, int __oflag)
{
    gDeviceFd = open(__file, __oflag);
    return gDeviceFd;
}

int32_t Recommended_standard::getTemiosBaudRate(uint8_t devBaudRate)
{
    switch(devBaudRate)
    {
    case MSOUNDBOX_115200:
    {
        return B115200;
    }
    case MSOUNDBOX_1000000:
    {
        return B1000000;
    }
    case BAUDRATE_9600:
    {
        return B9600;
    }
    default:
        return -1;
    }
}

int32_t Recommended_standard::setInterfaceAttribs(int32_t fd, int32_t speed, int32_t parity, int32_t waitTime)
{
    int32_t isBlockingMode = 0;
    struct termios tty;

    if(waitTime < 0 || waitTime > 255)
    {
        isBlockingMode = 1;
    }

    memset (&tty, 0, sizeof(tty));
    if (tcgetattr (fd, &tty) != 0) /* save current serial port settings */
    {
        return -1;
    }

    cfsetospeed (&tty, speed);
    cfsetispeed (&tty, speed);

    tty.c_cflag = (tty.c_cflag & ~CSIZE) | CS8;     // 8-bit chars
    tty.c_cflag &=  ~(INLCR);
    // disable IGNBRK for mismatched speed tests; otherwise receive break
    // as \000 chars
    tty.c_iflag &= ~IGNBRK;         // disable break processing
    tty.c_lflag = 0;                // no signaling chars, no echo,
    // no canonical processing
    tty.c_oflag = 0;                // no remapping, no delays
    tty.c_cc[VMIN]  = (1 == isBlockingMode) ? 1 : 0;            // read doesn't block
    tty.c_cc[VTIME] =  (1 == isBlockingMode)  ? 0 : waitTime;   // in unit of 100 milli-sec for set timeout value

    tty.c_iflag &= ~(IXON | IXOFF | IXANY); // shut off xon/xoff ctrl

    tty.c_cflag |= (CLOCAL | CREAD);// ignore modem controls,
    // enable reading
    tty.c_cflag &= ~(PARENB | PARODD);      // shut off parity
    tty.c_cflag |= parity;
    tty.c_cflag &= ~CSTOPB;
    tty.c_cflag &= ~CRTSCTS;

    /*http://man7.org/linux/man-pages/man3/termios.3.html*/
    /*'\r' was getting converted in '\n' while reading. This API will
       provide all read dat as it is */
    cfmakeraw(&tty);
    if (tcsetattr (fd, TCSANOW, &tty) != 0)
    {
        return -1;
    }

    return SUCCESS;
}

void Recommended_standard::on_write_clicked()
{
    if(ret == 0)
    {
        qDebug() << "Not initiated.";
        ui->lineEdit_rs485->setText("Please press the Init button.");
        return;
    }
    ui->textEdit_rs485->setReadOnly(false);

    int32_t ret_1;
    static uint8_t op;

    gpio_init();
    set_gpio(1);

    ret_1 = Perform_Test();
    return;
}


void Recommended_standard::gpio_init()
{
    QFile exportFile("/sys/class/gpio/export");
    if (exportFile.open(QIODevice::WriteOnly | QIODevice::Truncate | QIODevice::Text))
    {
        exportFile.write("27");
        exportFile.close();
    }

    QFile directionFile("/sys/class/gpio/gpio27/direction");
    if (directionFile.open(QIODevice::WriteOnly | QIODevice::Truncate | QIODevice::Text))
    {
        directionFile.write("out");
        directionFile.close();
    }
}

void Recommended_standard::set_gpio(int val)
{
    QString cmd = QString("echo %1 > /sys/class/gpio/gpio27/value").arg(val);

    QFile gpioValueFile("/sys/class/gpio/gpio27/value");

    if (gpioValueFile.open(QIODevice::WriteOnly | QIODevice::Truncate | QIODevice::Text))
    {
        gpioValueFile.write(cmd.toUtf8());

        gpioValueFile.close();
    }
}


int32_t Recommended_standard::Perform_Test()
{
    int32_t ret = 0, option = 0;
    char buff[BUFF_DATA_LEN] = {0};
    char readBuff[BUFF_DATA_LEN] = {0};
    //snprintf(buff, sizeof (buff), "Hello From Nikul");
    memset(buff,'\0',BUFF_DATA_LEN);
    //strcpy(buff,"qwerty");
    QString textFromTextEdit = ui->textEdit_rs485->toPlainText();

    // Convert QString to UTF-8 encoded QByteArray
    QByteArray byteArray = textFromTextEdit.toUtf8();

    // Copy data to buff, ensuring it doesn't exceed BUFF_DATA_LEN - 1 to leave room for null termination
    int size_1 = qMin(BUFF_DATA_LEN - 1, byteArray.size());
    memcpy(buff, byteArray.constData(), size_1);
    buff[size_1] = '\0'; // Null-terminate the string


    printf("Data to write: %s\n", buff);

    set_gpio(0);

    int size=strlen(buff);
    int tsize=0;
    int fsize=0;
    ret = writeData((char *)buff, size);
    if(ret < 0)
    {
        printf("Failed in writeData at %d\n", __LINE__);
        exit(-1);
    }
    printf("number of bytes written %d\n",ret);
    QString bytesWrittenString = QString("number of bytes written %1").arg(ret);
    ui->textEdit_rs485->setText(bytesWrittenString);

    memset(readBuff, '\0', BUFF_DATA_LEN);

    return 0;
}

int32_t Recommended_standard::writeData(char *buff, size_t bytes)
{
    uint32_t idx = 0, pendingByte = bytes, fs_sel;
    int32_t ret = 0;
    fd_set fs_write;
    int size=0;
    struct timeval time = {0, 0};

    tcflush(gDeviceFd,TCIFLUSH);

    FD_ZERO(&fs_write);
    FD_SET(gDeviceFd, &fs_write);
    while (1)
    {
            ret = write(gDeviceFd, &buff[idx], pendingByte);
        if(ret < 0)
        {
            printf("write failed %d\n",ret);

            return ret;
        }
            if(ret > 0)
            {
                pendingByte -= ret;
                idx += ret;
                size+=ret;
            }
        if(pendingByte <= 0)
        {
            printf("Data has been written successfully\n");
            break;
        }

    }
    return size;
}

int Recommended_standard::readData(char *buff, uint32_t pendingByte)
{
    uint32_t	fs_sel,  idx = 0;
    int32_t     ret = SUCCESS;
    fd_set      fs_read;
    struct timeval time = {0, 0};
    int dread=0;

    FD_ZERO(&fs_read);
    FD_SET(gDeviceFd, &fs_read);
    //while(isRead)
    //{
        printf("inside read buff:%s\n",buff);
        time.tv_sec = DEFAULT_TIMEOUT;
        fs_sel = select(gDeviceFd + 1, &fs_read, NULL, NULL, &time);
        if (fs_sel > 0)
        {
        while(1)
        {
                ret = read(gDeviceFd, &buff[idx], pendingByte);
                printf("inside read buff:%s\n",buff);
            if(ret < 0)
            {
                printf("Reading failure %d\n",ret);
                return ret;
            }
            if(ret > 0)
            {
                pendingByte -= ret;
                idx += ret;
                dread+=ret;
            }
            if( ret == 0)
            {
                printf("No data found\n");
                return dread;
            }
        }
        }
        else
        {
           printf("Timeout accur in read so returning from read at %d\n", __LINE__);
            return ERR_TIMEOUT_OCCUR;
        }
    //}
    return SUCCESS;
}

void Recommended_standard::on_read_clicked()
{
    if(ret == 0)
    {
        qDebug() << "Not initiated.";
        ui->lineEdit_rs485->setText("Not initiated. Please press the Init button\n");
        return;
    }
    int32_t ret_1;
    static uint8_t op;

    gpio_init();
//    set_gpio(0);

    ret = Perform_Test_1();
    return;
}


int32_t Recommended_standard::Perform_Test_1()
{
    int32_t ret = 0, option = 0;
    char buff[BUFF_DATA_LEN] = {0};
    char readBuff[BUFF_DATA_LEN] = {0};
    snprintf(buff, sizeof (buff), "Hello From Linux");

//    set_gpio(0);
    memset(readBuff, 0, sizeof (readBuff));
    ret = readData(readBuff, strlen(buff));
    if(ret < 0){
        printf("Failed in readData at %d\n", __LINE__);
    }

    printf("readBuff {%s}\n",readBuff);

    QString enteredData = ui->textEdit_rs485->toPlainText();

    QString displayString = QString("Data entered in textEdit: %1\n").arg(enteredData);
    ui->textEdit_rs485->setText(displayString);

    QString readBuffString = QString("\nreadBuff {%1}").arg(readBuff);
    ui->textEdit_rs485->setText(readBuffString);


    return 0;
}


void Recommended_standard::on_close_clicked()
{
    ret = 0;
    hide();
    TEST_SCREEN *mainwindow_rs485 = new TEST_SCREEN(this);
    mainwindow_rs485->show();
}

void Recommended_standard::on_pushButton_backspace_clicked()
{
        QString currentText = ui->textEdit_rs485->toPlainText();

        if (!currentText.isEmpty())
        {
            currentText.chop(1);
            ui->textEdit_rs485->setText(currentText);
        }
}

void Recommended_standard::on_pushButton_enter_clicked()
{
    ui->textEdit_rs485->insertPlainText("\n");
}
