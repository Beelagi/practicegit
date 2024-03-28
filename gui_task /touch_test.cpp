#include "touch_test.h"
#include "ui_touch_test.h"
#include "lcd_test.h"

TOUCH_TEST::TOUCH_TEST(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::TOUCH_TEST)
{
    ui->setupUi(this);

}

TOUCH_TEST::~TOUCH_TEST()
{
    delete ui;
}

void TOUCH_TEST::on_pushButton_4_clicked()   //closing the touch window
{
    hide();
    if (parentWidget())
    {
            parentWidget()->show();
    }
}

void TOUCH_TEST::on_touch_test_1_clicked()
{
    QString currentStyleSheet = ui->touch_test_1->styleSheet();

       if (currentStyleSheet.contains("red"))
       {
           ui->touch_test_1->setStyleSheet("background-color: green");
       }
       else
       {
           ui->touch_test_1->setStyleSheet("background-color: red");
       }
}

void TOUCH_TEST::on_touch_test_2_clicked()
{
    QString currentStyleSheet = ui->touch_test_2->styleSheet();

     if (currentStyleSheet.contains("red"))
     {
         ui->touch_test_2->setStyleSheet("background-color: green");
     }
     else
     {
         ui->touch_test_2->setStyleSheet("background-color: red");
     }
}

void TOUCH_TEST::on_touch_test_3_clicked()
{
    QString currentStyleSheet = ui->touch_test_3->styleSheet();

     if (currentStyleSheet.contains("red"))
     {
         ui->touch_test_3->setStyleSheet("background-color: green");
     }
     else
     {
         ui->touch_test_3->setStyleSheet("background-color: red");
     }
}

void TOUCH_TEST::on_touch_test_4_clicked()
{
    QString currentStyleSheet = ui->touch_test_4->styleSheet();

     if (currentStyleSheet.contains("red"))
     {
         ui->touch_test_4->setStyleSheet("background-color: green");
     }
     else
     {
         ui->touch_test_4->setStyleSheet("background-color: red");
     }
}

void TOUCH_TEST::on_touch_test_5_clicked()
{
    QString currentStyleSheet = ui->touch_test_5->styleSheet();

     if (currentStyleSheet.contains("red"))
     {
         ui->touch_test_5->setStyleSheet("background-color: green");
     }
     else
     {
         ui->touch_test_5->setStyleSheet("background-color: red");
     }
}
