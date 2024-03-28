#include "color_test.h"
#include "ui_color_test.h"
#include "lcd_test.h"

COLOR_TEST::COLOR_TEST(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::COLOR_TEST)
{
    ui->setupUi(this);
}

COLOR_TEST::~COLOR_TEST()
{
    delete ui;
}

void COLOR_TEST::on_close_color_test_clicked()
{
    hide();
    if (parentWidget())
    {
            parentWidget()->show();
    }
}
