#include "geotests.h"
#include "ui_geotests.h"

geoTests::geoTests(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::geoTests)
{
    ui->setupUi(this);
}

geoTests::~geoTests()
{
    delete ui;
}
