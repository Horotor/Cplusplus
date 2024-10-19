#include "geoquestlist.h"
#include "ui_geoquestlist.h"
#include "geoquest1.h"
#include <QSet> // Для хранения ответов на вопросы
#include <QFile>
#include <QTextStream>
#include <QMessageBox>
GeoQuestList::GeoQuestList(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::GeoQuestList)
{
    ui->setupUi(this);
    connect(ui->Question1Btn, &QPushButton::clicked, this, &GeoQuestList::onQuestionButtonClicked);
    connect(ui->Question2Btn10, &QPushButton::clicked, this, &GeoQuestList::onQuestionButtonClicked);
    connect(ui->Question3Btn, &QPushButton::clicked, this, &GeoQuestList::onQuestionButtonClicked);
    connect(ui->Question4Btn, &QPushButton::clicked, this, &GeoQuestList::onQuestionButtonClicked);
    connect(ui->Question5Btn, &QPushButton::clicked, this, &GeoQuestList::onQuestionButtonClicked);
    connect(ui->Question6Btn, &QPushButton::clicked, this, &GeoQuestList::onQuestionButtonClicked);
    connect(ui->Question7Btn, &QPushButton::clicked, this, &GeoQuestList::onQuestionButtonClicked);
    connect(ui->Question8Btn, &QPushButton::clicked, this, &GeoQuestList::onQuestionButtonClicked);
    connect(ui->Question9Btn, &QPushButton::clicked, this, &GeoQuestList::onQuestionButtonClicked);
    connect(ui->Question2Btn, &QPushButton::clicked, this, &GeoQuestList::onQuestionButtonClicked);
}

GeoQuestList::~GeoQuestList()
{
    delete ui;
}

int GeoQuestList::compareAnswers(const QString &answersForTestFile, const QString &userAnswersFile) {
    QFile testFile(answersForTestFile);
    QFile userFile(userAnswersFile);

    if (!testFile.open(QIODevice::ReadOnly | QIODevice::Text)) {
        qDebug() << "Failed to open test answers file for reading.";
        return -1;
    }

    if (!userFile.open(QIODevice::ReadOnly | QIODevice::Text)) {
        qDebug() << "Failed to open user answers file for reading.";
        return -1;
    }

    QTextStream testStream(&testFile);
    QTextStream userStream(&userFile);

    int score = 0;
    int questionNumber = 0;
    while (!testStream.atEnd() && !userStream.atEnd()) {
        QString testLine = testStream.readLine();
        QString userLine = userStream.readLine();

        QStringList testParts = testLine.split(", Answer: ");
        QStringList userParts = userLine.split(", Answer: ");

        if (testParts.size() != 2 || userParts.size() != 2) {
            qDebug() << "Invalid format in one of the files.";
            return -1;
        }

        int testAnswer = testParts[1].trimmed().toInt();
        int userAnswer = userParts[1].trimmed().toInt();

        if (testAnswer == userAnswer) {
            ++score;
        }

        ++questionNumber;
    }

    testFile.close();
    userFile.close();

    return score;
}



void GeoQuestList::onQuestionButtonClicked()
{
    // Определение номера вопроса в зависимости от нажатой кнопки
    int questionNumber = 0;
    if (sender() == ui->Question1Btn) {
        questionNumber = 1;
    }
    else if (sender() == ui->Question2Btn) {
        questionNumber = 2;
    } // Добавьте аналогичные проверки для остальных кнопок
    else if (sender() == ui->Question3Btn) {
        questionNumber = 3;
    }
    else if (sender() == ui->Question4Btn) {
        questionNumber = 4;
    }
    else if (sender() == ui->Question5Btn) {
        questionNumber = 5;
    } // Добавьте аналогичные проверки для остальных кнопок
    else if (sender() == ui->Question6Btn) {
        questionNumber = 6;
    }
    else if (sender() == ui->Question7Btn) {
        questionNumber = 7;
    }
    else if (sender() == ui->Question8Btn) {
        questionNumber = 8;
    } // Добавьте аналогичные проверки для остальных кнопок
    else if (sender() == ui->Question9Btn) {
        questionNumber = 9;
    }
    else if (sender() == ui->Question2Btn10) {
        questionNumber = 10;
    }

    // Создание и открытие окна GeoQuest1 с передачей номера вопроса
    GeoQuest1 *geoQuest1 = new GeoQuest1(this);
    geoQuest1->setQuestionNumber(questionNumber);
    geoQuest1->show();
}

void GeoQuestList::on_ResultBtn_clicked()
{
    QString testAnswersFile = "C:/Users/chete/OneDrive/Рабочий стол/build-OSiSPkursach1-Desktop_Qt_6_6_2_MinGW_64_bit-Debug/Server2/Server2/GeoTest/answersForTest.txt";
    QString userAnswersFile = "C:/Users/chete/OneDrive/Рабочий стол/build-OSiSPkursach1-Desktop_Qt_6_6_2_MinGW_64_bit-Debug/Server2/Server2/GeoTest/answers.txt";

    int score = compareAnswers(testAnswersFile, userAnswersFile);
    qDebug() << "User score:" << score;
    QMessageBox::information(this, "Результат теста", "Ваш счет: " + QString::number(score));
}

