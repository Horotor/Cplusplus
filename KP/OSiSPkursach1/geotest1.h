#ifndef GEOTEST1_H
#define GEOTEST1_H

#include <QDialog>
#include <QTcpSocket>
#include <QMessageBox>

 namespace Ui {
class GeoTest1;
}

class GeoTest1 : public QDialog
{
    Q_OBJECT

public:
    explicit GeoTest1(QWidget *parent = nullptr);
    ~GeoTest1();

private slots:
    void requestQuestionFromServer();
    void sendAnswerToServer(int);
    void on_AnswerButton_clicked();

private:
    Ui::GeoTest1 *ui;
    int numberOfQuestions;

};

#endif // GEOTEST1_H
