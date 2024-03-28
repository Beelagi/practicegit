#ifndef FINGER_PRINT_CAPTURE_H
#define FINGER_PRINT_CAPTURE_H
#include <QMainWindow>
#include "MFS100_100V2_FP.h"

class FP_thread;

namespace Ui {
class FINGER_PRINT_CAPTURE;
}

class FINGER_PRINT_CAPTURE : public QMainWindow
{
    Q_OBJECT

public:
    explicit FINGER_PRINT_CAPTURE(QWidget *parent = 0);
    uint8_t *templateData1, *templateData2;
    uint32_t templateDataLen1, templateDataLen2;



    ~FINGER_PRINT_CAPTURE();

private slots:
    void on_close_fp_capture_clicked();

    void on_start_FP_test_clicked();

    void on_start_FP_test_2_clicked();

    void on_verify_test_clicked();

private:
    Ui::FINGER_PRINT_CAPTURE *ui;

public slots:
};

#endif // FINGER_PRINT_CAPTURE_H
