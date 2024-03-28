#include "keyboard.h"
#include "ui_keyboard.h"
#include "ethernet.h"
#include <QDebug>


KEYBOARD::KEYBOARD(QLineEdit *lineEdit,QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::KEYBOARD)
{
    ui->setupUi(this);

    connect(ui->a_pushButton, &QPushButton::clicked, this, &KEYBOARD::onAlphabetButtonClicked);
    connect(ui->b_pushButton, &QPushButton::clicked, this, &KEYBOARD::onAlphabetButtonClicked);
    connect(ui->c_pushButton, &QPushButton::clicked, this, &KEYBOARD::onAlphabetButtonClicked);
    connect(ui->d_pushButton, &QPushButton::clicked, this, &KEYBOARD::onAlphabetButtonClicked);
    connect(ui->e_pushButton, &QPushButton::clicked, this, &KEYBOARD::onAlphabetButtonClicked);
    connect(ui->f_pushButton, &QPushButton::clicked, this, &KEYBOARD::onAlphabetButtonClicked);
    connect(ui->g_pushButton, &QPushButton::clicked, this, &KEYBOARD::onAlphabetButtonClicked);
    connect(ui->h_pushButton, &QPushButton::clicked, this, &KEYBOARD::onAlphabetButtonClicked);
    connect(ui->i_pushButton, &QPushButton::clicked, this, &KEYBOARD::onAlphabetButtonClicked);
    connect(ui->j_pushButton, &QPushButton::clicked, this, &KEYBOARD::onAlphabetButtonClicked);
    connect(ui->k_pushButton, &QPushButton::clicked, this, &KEYBOARD::onAlphabetButtonClicked);
    connect(ui->l_pushButton, &QPushButton::clicked, this, &KEYBOARD::onAlphabetButtonClicked);
    connect(ui->m_pushButton, &QPushButton::clicked, this, &KEYBOARD::onAlphabetButtonClicked);
    connect(ui->n_pushButton, &QPushButton::clicked, this, &KEYBOARD::onAlphabetButtonClicked);
    connect(ui->o_pushButton, &QPushButton::clicked, this, &KEYBOARD::onAlphabetButtonClicked);
    connect(ui->p_pushButton, &QPushButton::clicked, this, &KEYBOARD::onAlphabetButtonClicked);
    connect(ui->q_pushButton, &QPushButton::clicked, this, &KEYBOARD::onAlphabetButtonClicked);
    connect(ui->r_pushButton, &QPushButton::clicked, this, &KEYBOARD::onAlphabetButtonClicked);
    connect(ui->s_pushButton, &QPushButton::clicked, this, &KEYBOARD::onAlphabetButtonClicked);
    connect(ui->t_pushButton, &QPushButton::clicked, this, &KEYBOARD::onAlphabetButtonClicked);
    connect(ui->u_pushButton, &QPushButton::clicked, this, &KEYBOARD::onAlphabetButtonClicked);
    connect(ui->v_pushButton, &QPushButton::clicked, this, &KEYBOARD::onAlphabetButtonClicked);
    connect(ui->w_pushButton, &QPushButton::clicked, this, &KEYBOARD::onAlphabetButtonClicked);
    connect(ui->x_pushButton, &QPushButton::clicked, this, &KEYBOARD::onAlphabetButtonClicked);
    connect(ui->y_pushButton, &QPushButton::clicked, this, &KEYBOARD::onAlphabetButtonClicked);
    connect(ui->z_pushButton, &QPushButton::clicked, this, &KEYBOARD::onAlphabetButtonClicked);

    connect(ui->pushButton_1, &QPushButton::clicked, this, &KEYBOARD::onAlphabetButtonClicked);
    connect(ui->pushButton_2, &QPushButton::clicked, this, &KEYBOARD::onAlphabetButtonClicked);
    connect(ui->pushButton_3, &QPushButton::clicked, this, &KEYBOARD::onAlphabetButtonClicked);
    connect(ui->pushButton_4, &QPushButton::clicked, this, &KEYBOARD::onAlphabetButtonClicked);
    connect(ui->pushButton_5, &QPushButton::clicked, this, &KEYBOARD::onAlphabetButtonClicked);
    connect(ui->pushButton_6, &QPushButton::clicked, this, &KEYBOARD::onAlphabetButtonClicked);
    connect(ui->pushButton_7, &QPushButton::clicked, this, &KEYBOARD::onAlphabetButtonClicked);
    connect(ui->pushButton_8, &QPushButton::clicked, this, &KEYBOARD::onAlphabetButtonClicked);
    connect(ui->pushButton_9, &QPushButton::clicked, this, &KEYBOARD::onAlphabetButtonClicked);
    connect(ui->pushButton_0, &QPushButton::clicked, this, &KEYBOARD::onAlphabetButtonClicked);

    connect(ui->point_pushButton, &QPushButton::clicked, this, &KEYBOARD::onAlphabetButtonClicked);
    connect(ui->colon_pushButton, &QPushButton::clicked, this, &KEYBOARD::onAlphabetButtonClicked);
    connect(ui->equal_pushButton, &QPushButton::clicked, this, &KEYBOARD::onAlphabetButtonClicked);
    connect(ui->plus_pushButton, &QPushButton::clicked, this, &KEYBOARD::onAlphabetButtonClicked);
    connect(ui->hyphen_pushButton, &QPushButton::clicked, this, &KEYBOARD::onAlphabetButtonClicked);
    connect(ui->underscore_pushButton, &QPushButton::clicked, this, &KEYBOARD::onAlphabetButtonClicked);
    connect(ui->dollar_pushButton, &QPushButton::clicked, this, &KEYBOARD::onAlphabetButtonClicked);
    connect(ui->star_pushButton, &QPushButton::clicked, this, &KEYBOARD::onAlphabetButtonClicked);
    connect(ui->hash_pushButton, &QPushButton::clicked, this, &KEYBOARD::onAlphabetButtonClicked);
    connect(ui->at_pushButton, &QPushButton::clicked, this, &KEYBOARD::onAlphabetButtonClicked);
    connect(ui->amperstand_pushButton, &QPushButton::clicked, this, &KEYBOARD::onAlphabetButtonClicked);
    connect(ui->question_pushButton, &QPushButton::clicked, this, &KEYBOARD::onAlphabetButtonClicked);
    connect(ui->char_pushButton, &QPushButton::clicked, this, &KEYBOARD::onAlphabetButtonClicked);
    connect(ui->slash_pushButton, &QPushButton::clicked, this, &KEYBOARD::onAlphabetButtonClicked);
    connect(ui->percentage_pushButton, &QPushButton::clicked, this, &KEYBOARD::onAlphabetButtonClicked);


}


void KEYBOARD::onAlphabetButtonClicked()
{
    QPushButton *clickedButton = qobject_cast<QPushButton*>(sender());
    if (clickedButton)
    {
        QString buttonText = clickedButton->text();
        ui->result_ip_address->insert(buttonText);
    }
}


KEYBOARD::~KEYBOARD()
{
    delete ui;
}


void KEYBOARD::on_close_pushButton_clicked()
{
    hide();
        if (parentWidget())
        {
            parentWidget()->show();
        }
}

void KEYBOARD::on_ok_pushButton_clicked()
{
    emit okButtonClicked(ui->result_ip_address->text());
    qDebug() << "OK Button Clicked. Signal emitted with text:" << ui->result_ip_address->text();

    hide();
}

void KEYBOARD::on_backspace_pushButton_clicked()
{
    QLineEdit* ipAddressLineEdit = ui->result_ip_address;
    QString currentText = ipAddressLineEdit->text();
    int cursorPosition = ipAddressLineEdit->cursorPosition();

    if (cursorPosition > 0)
    {
        currentText.remove(cursorPosition - 1, 1);
        ipAddressLineEdit->setText(currentText);
        ipAddressLineEdit->setCursorPosition(cursorPosition - 1);
    }

}
