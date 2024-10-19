#include "mathquestions.h"
#include "ui_mathquestions.h"
#include <QSet> // Для хранения ответов на вопросы
#include <QFile>
#include <QTextStream>
#include "mathquest1.h""

MathQuestions::MathQuestions(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::MathQuestions)
{
    ui->setupUi(this);
    connect(ui->Question1Btn, &QPushButton::clicked, this, &MathQuestions::onQuestionButtonClicked);
    connect(ui->Question2Btn, &QPushButton::clicked, this, &MathQuestions::onQuestionButtonClicked);
    connect(ui->Question3Btn, &QPushButton::clicked, this, &MathQuestions::onQuestionButtonClicked);
    connect(ui->Question4Btn, &QPushButton::clicked, this, &MathQuestions::onQuestionButtonClicked);

}


MathQuestions::~MathQuestions()
{
    delete ui;
}

int MathQuestions::compareAnswers(const QString &answersForTestFile, const QString &userAnswersFile) {
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

void MathQuestions::onQuestionButtonClicked()
{
    int questionNumber = 0;
    if (sender() == ui->Question1Btn) {
        questionNumber = 1;
    }
    else if (sender() == ui->Question2Btn) {
        questionNumber = 2;
    }
    else if (sender() == ui->Question3Btn) {
        questionNumber = 3;
    }
    else if (sender() == ui->Question4Btn) {
        questionNumber = 4;
    }

    MathQuest1 *mathQuest1 = new MathQuest1(this);
    mathQuest1->setQuestionNumber(questionNumber);
    mathQuest1->show();
}


#include <QMessageBox>

void MathQuestions::on_Result_clicked()
{
    QString testAnswersFile = "C:/Users/chete/OneDrive/Рабочий стол/build-OSiSPkursach1-Desktop_Qt_6_6_2_MinGW_64_bit-Debug/Server2/Server2/MathTest/answersForTest.txt";  // Update the path
    QString userAnswersFile = "C:/Users/chete/OneDrive/Рабочий стол/build-OSiSPkursach1-Desktop_Qt_6_6_2_MinGW_64_bit-Debug/Server2/Server2/MathTest/answers.txt";     // Update the path

    int score = compareAnswers(testAnswersFile, userAnswersFile);

    // Выводим сообщение с количеством баллов
    QMessageBox::information(this, "Результат теста", "Ваш счет: " + QString::number(score));
    qDebug() << "User score:" << score;
}


