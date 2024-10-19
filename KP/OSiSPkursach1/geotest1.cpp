#include "geotest1.h"
#include "ui_geotest1.h"

GeoTest1::GeoTest1(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::GeoTest1)
{
    ui->setupUi(this);
    requestQuestionFromServer();

}

GeoTest1::~GeoTest1()
{
    delete ui;
}

void GeoTest1::requestQuestionFromServer() {
    QTcpSocket* socket = new QTcpSocket(this);
    socket->connectToHost("127.0.0.1", 12345); // IP адрес и порт сервера
    if (!socket->waitForConnected()) {
        QMessageBox::critical(this, "Error", "Failed to connect to server.");
        delete socket;
        return;
    }

    // Отправляем запрос на получение первого вопроса
    QString getQuestionMsg = "GetGeoQuestion 1\n";
    socket->write(getQuestionMsg.toUtf8());
    if (!socket->waitForBytesWritten()) {
        QMessageBox::critical(this, "Error", "Failed to send request to server.");
        delete socket;
        return;
    }

    if (!socket->waitForReadyRead()) {
        QMessageBox::critical(this, "Error", "Failed to receive response from server.");
        delete socket;
        return;
    }

    // Получаем ответ от сервера
    QByteArray responseData = socket->readAll();
    QString questionData(responseData);

    // Обработка ответа и дальнейшие действия...
    // Например, вы можете заполнить содержимое окна данными из questionData

    // Парсинг данных вопроса и ответов
    QStringList questionParts = questionData.split(";");
    if (questionParts.size() != 5) {
        QMessageBox::critical(this, "Error", "Invalid response from server.");
        delete socket;
        return;
    }

    QString question = questionParts[0];
    QString answer1 = questionParts[1];
    QString answer2 = questionParts[2];
    QString answer3 = questionParts[3];
    QString answer4 = questionParts[4];

    // Установка текста для QLabel
    ui->QuestionLabel->setText(question);
    ui->Answer1->setText(answer1);
    ui->Answer2->setText(answer2);
    ui->Answer3->setText(answer3);
    ui->Answer4->setText(answer4);

    delete socket;
}

void GeoTest1::sendAnswerToServer(int selectedAnswer) {
    // Создаем сокет и подключаемся к серверу
    QTcpSocket* socket = new QTcpSocket(this);
    socket->connectToHost("127.0.0.1", 12345); // IP адрес и порт сервера

    if (!socket->waitForConnected()) {
        QMessageBox::critical(this, "Error", "Failed to connect to server.");
        delete socket;
        return;
    }

    // Отправляем выбранный ответ на сервер
    QString answerMsg = "Answer " + QString::number(selectedAnswer) + "\n";
    socket->write(answerMsg.toUtf8());

    if (!socket->waitForBytesWritten()) {
        QMessageBox::critical(this, "Error", "Failed to send answer to server.");
        delete socket;
        return;
    }

    // Дожидаемся ответа от сервера
    if (!socket->waitForReadyRead()) {
        QMessageBox::critical(this, "Error", "Failed to receive response from server.");
        delete socket;
        return;
    }

    // Получаем результат от сервера
    QByteArray response = socket->readAll();
    QString result(response);

    // Отображаем результат пользователю
    if (result == "Correct") {
        QMessageBox::information(this, "Result", "Your answer is correct!");
    } else if (result == "Incorrect") {
        QMessageBox::information(this, "Result", "Your answer is incorrect.");
    } else {
        QMessageBox::critical(this, "Error", "Invalid response from server.");
    }

    delete socket;
}
void GeoTest1::on_AnswerButton_clicked()
{

}

