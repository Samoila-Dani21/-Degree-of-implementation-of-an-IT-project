/********************************************************************************
** Form generated from reading UI file 'proiectexistent.ui'
**
** Created by: Qt User Interface Compiler version 5.15.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_PROIECTEXISTENT_H
#define UI_PROIECTEXISTENT_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDateEdit>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_ProiectExistent
{
public:
    QWidget *centralwidget;
    QPushButton *pushButton;
    QWidget *layoutWidget;
    QVBoxLayout *verticalLayout;
    QLabel *label_2;
    QLabel *label;
    QDateEdit *dateEdit;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *ProiectExistent)
    {
        if (ProiectExistent->objectName().isEmpty())
            ProiectExistent->setObjectName(QString::fromUtf8("ProiectExistent"));
        ProiectExistent->resize(790, 347);
        ProiectExistent->setStyleSheet(QString::fromUtf8("background-image: url(:/bg_final.png);"));
        centralwidget = new QWidget(ProiectExistent);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        pushButton = new QPushButton(centralwidget);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setGeometry(QRect(330, 210, 75, 23));
        pushButton->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 127);\n"
"selection-background-color: rgb(255, 255, 255);"));
        layoutWidget = new QWidget(centralwidget);
        layoutWidget->setObjectName(QString::fromUtf8("layoutWidget"));
        layoutWidget->setGeometry(QRect(190, 10, 361, 181));
        verticalLayout = new QVBoxLayout(layoutWidget);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        label_2 = new QLabel(layoutWidget);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        verticalLayout->addWidget(label_2);

        label = new QLabel(layoutWidget);
        label->setObjectName(QString::fromUtf8("label"));

        verticalLayout->addWidget(label);

        dateEdit = new QDateEdit(layoutWidget);
        dateEdit->setObjectName(QString::fromUtf8("dateEdit"));
        dateEdit->setCalendarPopup(true);

        verticalLayout->addWidget(dateEdit);

        ProiectExistent->setCentralWidget(centralwidget);
        menubar = new QMenuBar(ProiectExistent);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 790, 21));
        ProiectExistent->setMenuBar(menubar);
        statusbar = new QStatusBar(ProiectExistent);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        ProiectExistent->setStatusBar(statusbar);

        retranslateUi(ProiectExistent);

        QMetaObject::connectSlotsByName(ProiectExistent);
    } // setupUi

    void retranslateUi(QMainWindow *ProiectExistent)
    {
        ProiectExistent->setWindowTitle(QCoreApplication::translate("ProiectExistent", "MainWindow", nullptr));
        pushButton->setText(QCoreApplication::translate("ProiectExistent", "Continuare", nullptr));
        label_2->setText(QCoreApplication::translate("ProiectExistent", "TextLabel", nullptr));
        label->setText(QCoreApplication::translate("ProiectExistent", "Introduceti Data de astazi", nullptr));
        dateEdit->setDisplayFormat(QCoreApplication::translate("ProiectExistent", "dd-MM-yyyy", nullptr));
    } // retranslateUi

};

namespace Ui {
    class ProiectExistent: public Ui_ProiectExistent {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PROIECTEXISTENT_H
