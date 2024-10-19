/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.7.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QVBoxLayout *verticalLayout;
    QLabel *TitleLabel;
    QLabel *Geography;
    QPushButton *geographyBtn;
    QGroupBox *groupBox;
    QHBoxLayout *horizontalLayout;
    QPushButton *mathBtn;
    QLabel *Math;
    QPushButton *biologyBtn;
    QLabel *Biology;
    QPushButton *historyBtn;
    QLabel *History;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName("MainWindow");
        MainWindow->resize(800, 600);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName("centralwidget");
        verticalLayout = new QVBoxLayout(centralwidget);
        verticalLayout->setObjectName("verticalLayout");
        TitleLabel = new QLabel(centralwidget);
        TitleLabel->setObjectName("TitleLabel");
        QFont font;
        font.setPointSize(27);
        TitleLabel->setFont(font);
        TitleLabel->setAlignment(Qt::AlignCenter);

        verticalLayout->addWidget(TitleLabel);

        Geography = new QLabel(centralwidget);
        Geography->setObjectName("Geography");
        Geography->setPixmap(QPixmap(QString::fromUtf8("Images/Geo.jpg")));

        verticalLayout->addWidget(Geography);

        geographyBtn = new QPushButton(centralwidget);
        geographyBtn->setObjectName("geographyBtn");

        verticalLayout->addWidget(geographyBtn);

        groupBox = new QGroupBox(centralwidget);
        groupBox->setObjectName("groupBox");
        horizontalLayout = new QHBoxLayout(groupBox);
        horizontalLayout->setObjectName("horizontalLayout");
        mathBtn = new QPushButton(groupBox);
        mathBtn->setObjectName("mathBtn");

        horizontalLayout->addWidget(mathBtn);

        Math = new QLabel(groupBox);
        Math->setObjectName("Math");

        horizontalLayout->addWidget(Math);

        biologyBtn = new QPushButton(groupBox);
        biologyBtn->setObjectName("biologyBtn");

        horizontalLayout->addWidget(biologyBtn);

        Biology = new QLabel(groupBox);
        Biology->setObjectName("Biology");

        horizontalLayout->addWidget(Biology);

        historyBtn = new QPushButton(groupBox);
        historyBtn->setObjectName("historyBtn");

        horizontalLayout->addWidget(historyBtn);

        History = new QLabel(groupBox);
        History->setObjectName("History");

        horizontalLayout->addWidget(History);


        verticalLayout->addWidget(groupBox);

        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 800, 25));
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName("statusbar");
        MainWindow->setStatusBar(statusbar);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        TitleLabel->setText(QCoreApplication::translate("MainWindow", "\320\224\320\270\321\201\321\206\320\270\320\277\320\273\320\270\320\275\321\213", nullptr));
        Geography->setText(QString());
        geographyBtn->setText(QCoreApplication::translate("MainWindow", "PushButton", nullptr));
        groupBox->setTitle(QString());
        mathBtn->setText(QCoreApplication::translate("MainWindow", "PushButton", nullptr));
        Math->setText(QCoreApplication::translate("MainWindow", "TextLabel", nullptr));
        biologyBtn->setText(QCoreApplication::translate("MainWindow", "PushButton", nullptr));
        Biology->setText(QCoreApplication::translate("MainWindow", "TextLabel", nullptr));
        historyBtn->setText(QCoreApplication::translate("MainWindow", "PushButton", nullptr));
        History->setText(QCoreApplication::translate("MainWindow", "TextLabel", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
