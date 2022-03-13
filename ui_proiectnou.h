/********************************************************************************
** Form generated from reading UI file 'proiectnou.ui'
**
** Created by: Qt User Interface Compiler version 5.15.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_PROIECTNOU_H
#define UI_PROIECTNOU_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_ProiectNou
{
public:
    QWidget *centralwidget;
    QVBoxLayout *verticalLayout_2;
    QVBoxLayout *verticalLayout;
    QLabel *label;
    QLineEdit *lineEdit_nume;
    QLabel *label_3;
    QSpinBox *spinBox_indicatori;
    QPushButton *pushButton;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *ProiectNou)
    {
        if (ProiectNou->objectName().isEmpty())
            ProiectNou->setObjectName(QString::fromUtf8("ProiectNou"));
        ProiectNou->resize(800, 465);
        ProiectNou->setStyleSheet(QString::fromUtf8("background-image: url(:/abstract-white-background-geometric-texture-vector-id1069183510.png);"));
        centralwidget = new QWidget(ProiectNou);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        verticalLayout_2 = new QVBoxLayout(centralwidget);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        label = new QLabel(centralwidget);
        label->setObjectName(QString::fromUtf8("label"));

        verticalLayout->addWidget(label);

        lineEdit_nume = new QLineEdit(centralwidget);
        lineEdit_nume->setObjectName(QString::fromUtf8("lineEdit_nume"));

        verticalLayout->addWidget(lineEdit_nume);

        label_3 = new QLabel(centralwidget);
        label_3->setObjectName(QString::fromUtf8("label_3"));

        verticalLayout->addWidget(label_3);

        spinBox_indicatori = new QSpinBox(centralwidget);
        spinBox_indicatori->setObjectName(QString::fromUtf8("spinBox_indicatori"));

        verticalLayout->addWidget(spinBox_indicatori);


        verticalLayout_2->addLayout(verticalLayout);

        pushButton = new QPushButton(centralwidget);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));

        verticalLayout_2->addWidget(pushButton);

        ProiectNou->setCentralWidget(centralwidget);
        menubar = new QMenuBar(ProiectNou);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 800, 21));
        ProiectNou->setMenuBar(menubar);
        statusbar = new QStatusBar(ProiectNou);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        ProiectNou->setStatusBar(statusbar);

        retranslateUi(ProiectNou);

        QMetaObject::connectSlotsByName(ProiectNou);
    } // setupUi

    void retranslateUi(QMainWindow *ProiectNou)
    {
        ProiectNou->setWindowTitle(QCoreApplication::translate("ProiectNou", "MainWindow", nullptr));
        label->setText(QCoreApplication::translate("ProiectNou", "Introduceti numele Proiectului asupra caruia doriti sa evaluati gradul de implementare", nullptr));
        label_3->setText(QCoreApplication::translate("ProiectNou", "Cati indici de performanta considerati ca sunt necesari?", nullptr));
        pushButton->setText(QCoreApplication::translate("ProiectNou", "Continuare", nullptr));
    } // retranslateUi

};

namespace Ui {
    class ProiectNou: public Ui_ProiectNou {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PROIECTNOU_H
