#ifndef GEOQUESTLIST_H
#define GEOQUESTLIST_H

#include <QDialog>

namespace Ui {
class GeoQuestList;
}

class GeoQuestList : public QDialog
{
    Q_OBJECT

public:
    explicit GeoQuestList(QWidget *parent = nullptr);
    ~GeoQuestList();

private slots:
    // Слот для обработки нажатий кнопок выбора вопроса
    void onQuestionButtonClicked();


    void on_ResultBtn_clicked();

    int compareAnswers(const QString &answersForTestFile, const QString &userAnswersFile);

private:
    Ui::GeoQuestList *ui;
};

#endif // GEOQUESTLIST_H
