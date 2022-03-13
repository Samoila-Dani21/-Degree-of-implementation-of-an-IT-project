/********************************************************************************
** Form generated from reading UI file 'alegeretaskuri.ui'
**
** Created by: Qt User Interface Compiler version 5.15.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ALEGERETASKURI_H
#define UI_ALEGERETASKURI_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_AlegereTaskuri
{
public:
    QWidget *centralwidget;
    QLabel *label;
    QPushButton *pushButton_2;
    QWidget *layoutWidget;
    QVBoxLayout *verticalLayout;
    QLabel *label_2;
    QHBoxLayout *horizontalLayout;
    QLabel *label_3;
    QSpinBox *spinBox;
    QTextEdit *textEdit;
    QPushButton *pushButton;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *AlegereTaskuri)
    {
        if (AlegereTaskuri->objectName().isEmpty())
            AlegereTaskuri->setObjectName(QString::fromUtf8("AlegereTaskuri"));
        AlegereTaskuri->resize(777, 421);
        AlegereTaskuri->setStyleSheet(QString::fromUtf8("background-image: url(:/white-background-diamond-plate.png);"));
        centralwidget = new QWidget(AlegereTaskuri);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        label = new QLabel(centralwidget);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(220, 50, 201, 20));
        pushButton_2 = new QPushButton(centralwidget);
        pushButton_2->setObjectName(QString::fromUtf8("pushButton_2"));
        pushButton_2->setGeometry(QRect(490, 210, 75, 71));
        layoutWidget = new QWidget(centralwidget);
        layoutWidget->setObjectName(QString::fromUtf8("layoutWidget"));
        layoutWidget->setGeometry(QRect(200, 100, 258, 178));
        verticalLayout = new QVBoxLayout(layoutWidget);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        label_2 = new QLabel(layoutWidget);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        verticalLayout->addWidget(label_2);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        label_3 = new QLabel(layoutWidget);
        label_3->setObjectName(QString::fromUtf8("label_3"));

        horizontalLayout->addWidget(label_3);

        spinBox = new QSpinBox(layoutWidget);
        spinBox->setObjectName(QString::fromUtf8("spinBox"));

        horizontalLayout->addWidget(spinBox);


        verticalLayout->addLayout(horizontalLayout);

        textEdit = new QTextEdit(layoutWidget);
        textEdit->setObjectName(QString::fromUtf8("textEdit"));

        verticalLayout->addWidget(textEdit);

        pushButton = new QPushButton(layoutWidget);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));

        verticalLayout->addWidget(pushButton);

        AlegereTaskuri->setCentralWidget(centralwidget);
        menubar = new QMenuBar(AlegereTaskuri);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 777, 21));
        AlegereTaskuri->setMenuBar(menubar);
        statusbar = new QStatusBar(AlegereTaskuri);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        AlegereTaskuri->setStatusBar(statusbar);

        retranslateUi(AlegereTaskuri);

        QMetaObject::connectSlotsByName(AlegereTaskuri);
    } // setupUi

    void retranslateUi(QMainWindow *AlegereTaskuri)
    {
        AlegereTaskuri->setWindowTitle(QCoreApplication::translate("AlegereTaskuri", "MainWindow", nullptr));
        label->setText(QCoreApplication::translate("AlegereTaskuri", "Scrieti Taskurile:", nullptr));
        pushButton_2->setText(QCoreApplication::translate("AlegereTaskuri", "Continuare", nullptr));
        label_2->setText(QCoreApplication::translate("AlegereTaskuri", "TextLabel", nullptr));
        label_3->setText(QCoreApplication::translate("AlegereTaskuri", "Numar Taskuri", nullptr));
        pushButton->setText(QCoreApplication::translate("AlegereTaskuri", "Adaugare Task", nullptr));
    } // retranslateUi

};

namespace Ui {
    class AlegereTaskuri: public Ui_AlegereTaskuri {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ALEGERETASKURI_H
