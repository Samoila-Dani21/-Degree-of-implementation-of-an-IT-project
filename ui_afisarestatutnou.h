/********************************************************************************
** Form generated from reading UI file 'afisarestatutnou.ui'
**
** Created by: Qt User Interface Compiler version 5.15.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_AFISARESTATUTNOU_H
#define UI_AFISARESTATUTNOU_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_AfisareStatutNou
{
public:
    QWidget *centralwidget;
    QVBoxLayout *verticalLayout_2;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout;
    QPushButton *pushButton;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *AfisareStatutNou)
    {
        if (AfisareStatutNou->objectName().isEmpty())
            AfisareStatutNou->setObjectName(QString::fromUtf8("AfisareStatutNou"));
        AfisareStatutNou->resize(800, 600);
        AfisareStatutNou->setStyleSheet(QString::fromUtf8("background-image: url(:/white-background-diamond-plate.png);"));
        centralwidget = new QWidget(AfisareStatutNou);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        verticalLayout_2 = new QVBoxLayout(centralwidget);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));

        verticalLayout_2->addLayout(verticalLayout);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));

        verticalLayout_2->addLayout(horizontalLayout);

        pushButton = new QPushButton(centralwidget);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));

        verticalLayout_2->addWidget(pushButton);

        AfisareStatutNou->setCentralWidget(centralwidget);
        menubar = new QMenuBar(AfisareStatutNou);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 800, 21));
        AfisareStatutNou->setMenuBar(menubar);
        statusbar = new QStatusBar(AfisareStatutNou);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        AfisareStatutNou->setStatusBar(statusbar);

        retranslateUi(AfisareStatutNou);

        QMetaObject::connectSlotsByName(AfisareStatutNou);
    } // setupUi

    void retranslateUi(QMainWindow *AfisareStatutNou)
    {
        AfisareStatutNou->setWindowTitle(QCoreApplication::translate("AfisareStatutNou", "MainWindow", nullptr));
        pushButton->setText(QCoreApplication::translate("AfisareStatutNou", "Afisare Grafica", nullptr));
    } // retranslateUi

};

namespace Ui {
    class AfisareStatutNou: public Ui_AfisareStatutNou {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_AFISARESTATUTNOU_H
