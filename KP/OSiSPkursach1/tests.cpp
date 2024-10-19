#include "tests.h"
#include "ui_tests.h"
#include "geotests.h"
#include "geoquestlist.h"
#include "mathquestions.h""
Tests::Tests(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::Tests)
{
    ui->setupUi(this);
}

Tests::~Tests()
{
    delete ui;
}

void Tests::on_pushButton_clicked()
{
    // Создаем экземпляр MainWindow динамически
    GeoQuestList *w = new GeoQuestList();
    // Отображаем окно MainWindow
    w->show();
}


void Tests::on_pushButton_2_clicked()
{
    // Создаем экземпляр MainWindow динамически
    MathQuestions *w = new MathQuestions();
    // Отображаем окно MainWindow
    w->show();
}

