/********************************************************************************
** Form generated from reading UI file 'alegereindicatori.ui'
**
** Created by: Qt User Interface Compiler version 5.15.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ALEGEREINDICATORI_H
#define UI_ALEGEREINDICATORI_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_AlegereIndicatori
{
public:
    QWidget *centralwidget;
    QLabel *label;
    QPushButton *pushButton;
    QWidget *layoutWidget;
    QVBoxLayout *verticalLayout;
    QLabel *label_2;
    QTextEdit *textEdit;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *AlegereIndicatori)
    {
        if (AlegereIndicatori->objectName().isEmpty())
            AlegereIndicatori->setObjectName(QString::fromUtf8("AlegereIndicatori"));
        AlegereIndicatori->resize(814, 457);
        AlegereIndicatori->setStyleSheet(QString::fromUtf8("background-image: url(:/white-background-diamond-plate.png);"));
        centralwidget = new QWidget(AlegereIndicatori);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        label = new QLabel(centralwidget);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(210, 70, 301, 31));
        pushButton = new QPushButton(centralwidget);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setGeometry(QRect(320, 300, 131, 23));
        layoutWidget = new QWidget(centralwidget);
        layoutWidget->setObjectName(QString::fromUtf8("layoutWidget"));
        layoutWidget->setGeometry(QRect(200, 130, 421, 131));
        verticalLayout = new QVBoxLayout(layoutWidget);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        label_2 = new QLabel(layoutWidget);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        verticalLayout->addWidget(label_2);

        textEdit = new QTextEdit(layoutWidget);
        textEdit->setObjectName(QString::fromUtf8("textEdit"));

        verticalLayout->addWidget(textEdit);

        AlegereIndicatori->setCentralWidget(centralwidget);
        menubar = new QMenuBar(AlegereIndicatori);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 814, 21));
        AlegereIndicatori->setMenuBar(menubar);
        statusbar = new QStatusBar(AlegereIndicatori);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        AlegereIndicatori->setStatusBar(statusbar);

        retranslateUi(AlegereIndicatori);

        QMetaObject::connectSlotsByName(AlegereIndicatori);
    } // setupUi

    void retranslateUi(QMainWindow *AlegereIndicatori)
    {
        AlegereIndicatori->setWindowTitle(QCoreApplication::translate("AlegereIndicatori", "MainWindow", nullptr));
        label->setText(QCoreApplication::translate("AlegereIndicatori", "Scrieti indicatorii:", nullptr));
        pushButton->setText(QCoreApplication::translate("AlegereIndicatori", "Adaugare Indicator", nullptr));
        label_2->setText(QCoreApplication::translate("AlegereIndicatori", "TextLabel", nullptr));
    } // retranslateUi

};

namespace Ui {
    class AlegereIndicatori: public Ui_AlegereIndicatori {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ALEGEREINDICATORI_H
