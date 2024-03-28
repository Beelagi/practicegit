#include "finger_print_capture.h"
#include "ui_finger_print_capture.h"
#include "test_screen.h"
#include "MFS100_100V2_FP.h"
#include "QThread"
#include <QTimer>

#define MIN_FINGER_QUALITY          40
#define MAX_FINGER_QUALITY          60
#define MAX_TEMPLATE_LEN            1600    // 1566 as per Doc page 29, for safety take as 1600


FINGER_PRINT_CAPTURE::FINGER_PRINT_CAPTURE(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::FINGER_PRINT_CAPTURE)
{
    ui->setupUi(this);

    templateDataLen1 = MAX_TEMPLATE_LEN;
    templateData1 = static_cast<uint8_t *>(malloc(sizeof(uchar)*(MAX_TEMPLATE_LEN)));
    if(templateData1 == nullptr)
    {
        qDebug("Failed to allocate memory");
        return;
    }

    templateDataLen2 = MAX_TEMPLATE_LEN;
    templateData2 = static_cast<uint8_t *>(malloc(sizeof(uchar)*(MAX_TEMPLATE_LEN)));
    if(templateData2 == nullptr)
    {
        qDebug("Failed to allocate memory");
        return;
    }


    int32_t ret = 0;
    QString msgStr = "";
    ret = MFS100_100V2_Finger_Auth_InitDevice();
    if (ret < 0)
    {
        qDebug()<<"MFS100V2_Finger_Auth_InitDevice:"<<ret;
        msgStr = "Failed: ";
        msgStr.append(ret);
        ui->FP_label->setText(msgStr);
        return;
    }
    ui->FP_label->clear();
    ui->FP_label->setText(static_cast<QString>("Init Success"));

}

FINGER_PRINT_CAPTURE::~FINGER_PRINT_CAPTURE()
{
    free(templateData1);
    free(templateData2);
    delete ui;
}

void FINGER_PRINT_CAPTURE::on_start_FP_test_clicked()
{ 
    int32_t ret = 0;
    ui->FP_label->clear();
    qDebug("Going for capture 1\n");

    ret = MFS100_100V2_Finger_Auth_AutoCapture(MIN_FINGER_QUALITY, MAX_FINGER_QUALITY, 10000, nullptr, true);

    if(ret<0)
    {
        ui->FP_label->setText("Timeout\nCapture Failed.");
    }
    else
    {
        memset(templateData1, 0, MAX_TEMPLATE_LEN);

        ret = MFS100_100V2_Finger_Auth_GetTemplate(templateData1, &templateDataLen1, FMR_V2005);
        if(ret<0)
        {
            qDebug("Failed to create template. ret:%d\n",ret);
            ui->FP_label->setText(QString("Failed to create template. :%1").arg(ret));
        }
        else
        {
            ui->FP_label->setText(static_cast<QString>("Captured"));
            qDebug("Captured\n");
        }
    }
}

void FINGER_PRINT_CAPTURE::on_start_FP_test_2_clicked()
{
    int32_t ret = 0;
    ui->FP_label->clear();
    ui->FP_label->setText("Going for capture 2");
    qDebug("Going for capture 2\n");

    ret = MFS100_100V2_Finger_Auth_AutoCapture(MIN_FINGER_QUALITY, MAX_FINGER_QUALITY, 10000, nullptr, true);

    if(ret<0)
    {
        ui->FP_label->setText("Timeout\nCapture Failed.");
    }
    else
    {
        memset(templateData2, 0, MAX_TEMPLATE_LEN);

        ret = MFS100_100V2_Finger_Auth_GetTemplate(templateData2, &templateDataLen2, FMR_V2005);
        if(ret<0)
        {
            qDebug("Failed to create template. ret:%d\n",ret);
            ui->FP_label->setText(QString("Failed to create template. :%1").arg(ret));
        }
        else
        {
            ui->FP_label->setText(static_cast<QString>("Captured"));
            qDebug("Captured\n");
        }
    }
}

void FINGER_PRINT_CAPTURE::on_close_fp_capture_clicked()
{
    hide();
    TEST_SCREEN *close_fp = new TEST_SCREEN(this);
    close_fp->show();
}


void FINGER_PRINT_CAPTURE::on_verify_test_clicked()
{
    ui->FP_label->clear();
    int32_t ret = 0;
    uint32_t matchScore = 0;
    if((templateDataLen1==0) || (templateDataLen2==0))
    {
        ui->FP_label->setText(static_cast<QString>("Invalid Data"));
        return;
    }

     ret = MFS100_100V2_Finger_Auth_MatchTemplate(templateData1, templateDataLen1, templateData2, templateDataLen2, &matchScore, FMR_V2005);

    qDebug("MFS100_100V2_Finger_Auth_MatchTemplate: Score: %d\n",matchScore);
    if((ret == 0) && (matchScore > 60))
    {
        ui->FP_label->setText(static_cast<QString>("Matched|%1").arg(matchScore));
    }
    else
    {
        ui->FP_label->setText(static_cast<QString>("Not Matched|%1").arg(matchScore));
    }
}
