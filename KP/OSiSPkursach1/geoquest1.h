#ifndef GEOQUEST1_H
#define GEOQUEST1_H

#include <QDialog>
#include <QTcpSocket>

namespace Ui {
class GeoQuest1;
}

class GeoQuest1 : public QDialog
{
    Q_OBJECT

public:
    explicit GeoQuest1(QWidget *parent = nullptr);
    ~GeoQuest1();
     void setQuestionNumber(int);

private slots:
    void sendRequestForQuestion(int);
    void onConnected();
    void onReadyRead();
    void onDisconnected();
    void onAnswerClicked();
    void saveAnswerToFile(int, const QString &answer);

private:
    Ui::GeoQuest1 *ui;
    QTcpSocket *socket;
    QSet<int> answeredQuestions;    // Сокет для подключения к серверу
    int m_questionNumber;
};

#endif // GEOQUEST1_H
