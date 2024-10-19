#include "geoquest1.h"
#include "ui_geoquest1.h"
#include <QTcpSocket>
#include <QAbstractSocket>
#include <QSet> // Для хранения ответов на вопросы
#include <QFile>
#include <QTextStream>

GeoQuest1::GeoQuest1(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::GeoQuest1)
{
    ui->setupUi(this);

    socket = new QTcpSocket(this); // Инициализируем сокет

    // Подключение сигналов и слотов для обработки ответов от сервера
    connect(socket, &QTcpSocket::connected, this, &GeoQuest1::onConnected);
    connect(socket, &QTcpSocket::readyRead, this, &GeoQuest1::onReadyRead);
    connect(socket, &QTcpSocket::disconnected, this, &GeoQuest1::onDisconnected);

    // Подключение к серверу
    socket->connectToHost("127.0.0.1", 12345); // IP и порт сервера

    // Подключение сигналов к слотам для обработки нажатий на кнопки ответов
    connect(ui->Answer1Button, &QPushButton::clicked, this, &GeoQuest1::onAnswerClicked);
    connect(ui->Answer2Button, &QPushButton::clicked, this, &GeoQuest1::onAnswerClicked);
    connect(ui->Answer3Button, &QPushButton::clicked, this, &GeoQuest1::onAnswerClicked);
    connect(ui->Answer4Button, &QPushButton::clicked, this, &GeoQuest1::onAnswerClicked);
}

GeoQuest1::~GeoQuest1()
{
    delete ui;
}

void GeoQuest1::setQuestionNumber(int questionNumber) {
    m_questionNumber = questionNumber; // Сохраняем номер вопроса для дальнейшего использования
    // Отправляем запрос на сервер с номером вопроса m_questionNumber
    sendRequestForQuestion(m_questionNumber);
}

void GeoQuest1::onAnswerClicked() {
    if (answeredQuestions.contains(m_questionNumber)) {
        qDebug() << "Answer for question" << m_questionNumber << "has already been submitted.";
        return; // Уже был дан ответ на этот вопрос
    }

    QPushButton *clickedButton = qobject_cast<QPushButton*>(sender());
    if (!clickedButton) {
        qDebug() << "Invalid button clicked.";
        return;
    }

    QString answer = clickedButton->text();

    answeredQuestions.insert(m_questionNumber); // Помечаем вопрос как отвеченный

    // Сохранение ответа в файл
    saveAnswerToFile(m_questionNumber, answer);
}

void GeoQuest1::sendRequestForQuestion(int questionNumber) {
    if (!socket || socket->state() != QAbstractSocket::ConnectedState) {
        qDebug() << "Not connected to server. Cannot send request.";
        return;
    }

    qDebug() << "Requesting question" << questionNumber << "from server.";

    QString requestMsg = "GetGeoQuestion " + QString::number(questionNumber) + "\n";
    socket->write(requestMsg.toUtf8());
}

void GeoQuest1::onConnected() {
    qDebug() << "Connected to server.";
    // Отправляем запрос при успешном подключении
    sendRequestForQuestion(m_questionNumber);
}

void GeoQuest1::onReadyRead() {
    QByteArray responseData = socket->readAll();
    QString questionData(responseData);

    // Разбор данных вопроса и установка текста вопроса и ответов на форму
    QStringList lines = questionData.split("\n");
    if (lines.size() >= 5) {
        ui->QuestionLabel->setText(lines[0]);
        ui->Answer1Button->setText(lines[1]);
        ui->Answer2Button->setText(lines[2]);
        ui->Answer3Button->setText(lines[3]);
        ui->Answer4Button->setText(lines[4]);
    }
}

void GeoQuest1::saveAnswerToFile(int questionNumber, const QString &answer) {
    QFile file("C:/Users/chete/OneDrive/Рабочий стол/build-OSiSPkursach1-Desktop_Qt_6_6_2_MinGW_64_bit-Debug/Server2/Server2/GeoTest/answers.txt"); // Используем более простой путь
    if (file.open(QIODevice::WriteOnly | QIODevice::Append | QIODevice::Text)) {
        QTextStream out(&file);
        out << "Question: " << questionNumber << ", Answer: " << answer << "\n";
        file.close();
    } else {
        qDebug() << "Failed to open file for writing.";
    }
}

void GeoQuest1::onDisconnected() {
    qDebug() << "Disconnected from server.";
    // Обработка отключения от сервера, если необходимо
}

