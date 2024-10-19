#include "autorization.h"
#include "ui_autorization.h"
#include "registration.h"
#include "mainwindow.h"
#include "geotest1.h"
Autorization::Autorization(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::Autorization)
{
    ui->setupUi(this);
}

Autorization::~Autorization()
{
    delete ui;
}



void Autorization::on_RegButton_clicked()
{
    Registration w;
    w.exec();
}


void Autorization::on_Enter_clicked()
{
    // Создаем экземпляр MainWindow динамически
    MainWindow *mainWindow = new MainWindow();
    // Отображаем окно MainWindow
    mainWindow->show();

}


void Autorization::on_Test_clicked()
{
    // Создаем экземпляр MainWindow динамически
    GeoTest1 *mainWindow = new GeoTest1();
    // Отображаем окно MainWindow
    mainWindow->show();

}

