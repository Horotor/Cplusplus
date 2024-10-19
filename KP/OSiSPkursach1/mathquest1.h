#ifndef MATHQUEST1_H
#define MATHQUEST1_H

#include <QDialog>
#include <QTcpSocket>
#include <QSet>

namespace Ui {
class MathQuest1;
}

class MathQuest1 : public QDialog
{
    Q_OBJECT

public:
    explicit MathQuest1(QWidget *parent = nullptr);
    ~MathQuest1();
    void setQuestionNumber(int questionNumber);

private slots:
    void onAnswerClicked();
    void sendRequestForQuestion(int questionNumber);
    void onConnected();
    void onReadyRead();
    void saveAnswerToFile(int questionNumber, const QString &answer);
    void onDisconnected();
    void processQuestion(const QString &questionData);

private:
    Ui::MathQuest1 *ui;
    QTcpSocket *socket;
    int m_questionNumber;
    QSet<int> answeredQuestions;
};

#endif // MATHQUEST1_H
