#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "geotests.h"
MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    connect(ui->Geography, SIGNAL(linkActivated(QString)), this, SLOT(on_Geography_linkActivated));
    ui->Geography->setText("<a href=\"open_new_window\">"
                       "<img src=\":/Images/Geo.jpg\"></a>");
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_Geography_linkActivated(const QString &link)
{
    // Создаем экземпляр нового окна
    geoTests *newWindow = new geoTests(this);
    // Отображаем новое окно
    newWindow->show();
}



