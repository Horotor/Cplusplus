#ifndef TESTS_H
#define TESTS_H

#include <QDialog>

namespace Ui {
class Tests;
}

class Tests : public QDialog
{
    Q_OBJECT

public:
    explicit Tests(QWidget *parent = nullptr);
    ~Tests();

private slots:
    void on_pushButton_clicked();

    void on_pushButton_2_clicked();

private:
    Ui::Tests *ui;
};

#endif // TESTS_H
