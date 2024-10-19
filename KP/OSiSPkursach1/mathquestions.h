#ifndef MATHQUESTIONS_H
#define MATHQUESTIONS_H

#include <QDialog>

namespace Ui {
class MathQuestions;
}

class MathQuestions : public QDialog
{
    Q_OBJECT

public:
    explicit MathQuestions(QWidget *parent = nullptr);
    ~MathQuestions();

private slots:
    void onQuestionButtonClicked();

    void on_Result_clicked();

private:
    Ui::MathQuestions *ui;
    int compareAnswers(const QString &answersForTestFile, const QString &userAnswersFile);
};

#endif // MATHQUESTIONS_H
