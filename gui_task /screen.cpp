#include "screen.h"
#include "ui_screen.h"

SCREEN::SCREEN(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::SCREEN)
{
    ui->setupUi(this);
    setAttribute(Qt::WA_TranslucentBackground);
    setWindowFlags(Qt::FramelessWindowHint);
    setWindowFlags(Qt::WindowStaysOnTopHint);


    QPixmap pix(":/audio/thank_you_audio_file/mantra_logo.jpg");
    int w = ui->label_logo->width();
    int h = ui->label_logo->height();
    ui->label_logo->setPixmap(pix.scaled(w, h, Qt::KeepAspectRatio));
    ui->label_logo->setSizePolicy(QSizePolicy::Ignored, QSizePolicy::Ignored);

}

SCREEN::~SCREEN()
{
    delete ui;
}

void SCREEN::on_open_new_window_clicked()
{
    screen_window = new TEST_SCREEN(this);
    screen_window->show();
}
