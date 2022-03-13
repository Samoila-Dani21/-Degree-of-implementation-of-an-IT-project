/********************************************************************************
** Form generated from reading UI file 'afisaregrafica.ui'
**
** Created by: Qt User Interface Compiler version 5.15.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_AFISAREGRAFICA_H
#define UI_AFISAREGRAFICA_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_AfisareGrafica
{
public:
    QMenuBar *menubar;
    QWidget *centralwidget;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *AfisareGrafica)
    {
        if (AfisareGrafica->objectName().isEmpty())
            AfisareGrafica->setObjectName(QString::fromUtf8("AfisareGrafica"));
        AfisareGrafica->resize(800, 600);
        menubar = new QMenuBar(AfisareGrafica);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        AfisareGrafica->setMenuBar(menubar);
        centralwidget = new QWidget(AfisareGrafica);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        AfisareGrafica->setCentralWidget(centralwidget);
        statusbar = new QStatusBar(AfisareGrafica);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        AfisareGrafica->setStatusBar(statusbar);

        retranslateUi(AfisareGrafica);

        QMetaObject::connectSlotsByName(AfisareGrafica);
    } // setupUi

    void retranslateUi(QMainWindow *AfisareGrafica)
    {
        AfisareGrafica->setWindowTitle(QCoreApplication::translate("AfisareGrafica", "MainWindow", nullptr));
    } // retranslateUi

};

namespace Ui {
    class AfisareGrafica: public Ui_AfisareGrafica {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_AFISAREGRAFICA_H
