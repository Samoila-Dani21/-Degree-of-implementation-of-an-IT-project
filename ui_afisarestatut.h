/********************************************************************************
** Form generated from reading UI file 'afisarestatut.ui'
**
** Created by: Qt User Interface Compiler version 5.15.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_AFISARESTATUT_H
#define UI_AFISARESTATUT_H

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

class Ui_AfisareStatut
{
public:
    QWidget *centralwidget;
    QVBoxLayout *verticalLayout_4;
    QVBoxLayout *verticalLayout_3;
    QVBoxLayout *verticalLayout_2;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout;
    QPushButton *pushButton;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *AfisareStatut)
    {
        if (AfisareStatut->objectName().isEmpty())
            AfisareStatut->setObjectName(QString::fromUtf8("AfisareStatut"));
        AfisareStatut->resize(796, 611);
        AfisareStatut->setStyleSheet(QString::fromUtf8("background-image: url(:/abstract-white-background-geometric-texture-vector-id1069183510.png);"));
        centralwidget = new QWidget(AfisareStatut);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        verticalLayout_4 = new QVBoxLayout(centralwidget);
        verticalLayout_4->setObjectName(QString::fromUtf8("verticalLayout_4"));
        verticalLayout_3 = new QVBoxLayout();
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));

        verticalLayout_2->addLayout(verticalLayout);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));

        verticalLayout_2->addLayout(horizontalLayout);


        verticalLayout_3->addLayout(verticalLayout_2);

        pushButton = new QPushButton(centralwidget);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));

        verticalLayout_3->addWidget(pushButton);


        verticalLayout_4->addLayout(verticalLayout_3);

        AfisareStatut->setCentralWidget(centralwidget);
        menubar = new QMenuBar(AfisareStatut);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 796, 21));
        AfisareStatut->setMenuBar(menubar);
        statusbar = new QStatusBar(AfisareStatut);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        AfisareStatut->setStatusBar(statusbar);

        retranslateUi(AfisareStatut);

        QMetaObject::connectSlotsByName(AfisareStatut);
    } // setupUi

    void retranslateUi(QMainWindow *AfisareStatut)
    {
        AfisareStatut->setWindowTitle(QCoreApplication::translate("AfisareStatut", "MainWindow", nullptr));
        pushButton->setText(QCoreApplication::translate("AfisareStatut", "Update Valori", nullptr));
    } // retranslateUi

};

namespace Ui {
    class AfisareStatut: public Ui_AfisareStatut {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_AFISARESTATUT_H
