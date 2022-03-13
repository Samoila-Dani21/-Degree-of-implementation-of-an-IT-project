/********************************************************************************
** Form generated from reading UI file 'alegeredate.ui'
**
** Created by: Qt User Interface Compiler version 5.15.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ALEGEREDATE_H
#define UI_ALEGEREDATE_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDateEdit>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_AlegereDate
{
public:
    QWidget *centralwidget;
    QWidget *layoutWidget;
    QVBoxLayout *verticalLayout;
    QLabel *label;
    QSpinBox *spinBox;
    QLabel *label_2;
    QDateEdit *dateEdit;
    QPushButton *pushButton;
    QWidget *layoutWidget1;
    QVBoxLayout *verticalLayout_2;
    QLabel *label_3;
    QPushButton *pushButton_2;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *AlegereDate)
    {
        if (AlegereDate->objectName().isEmpty())
            AlegereDate->setObjectName(QString::fromUtf8("AlegereDate"));
        AlegereDate->resize(807, 460);
        AlegereDate->setStyleSheet(QString::fromUtf8("background-image: url(:/abstract-white-background-geometric-texture-vector-id1069183510.png);"));
        centralwidget = new QWidget(AlegereDate);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        layoutWidget = new QWidget(centralwidget);
        layoutWidget->setObjectName(QString::fromUtf8("layoutWidget"));
        layoutWidget->setGeometry(QRect(130, 80, 501, 161));
        verticalLayout = new QVBoxLayout(layoutWidget);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        label = new QLabel(layoutWidget);
        label->setObjectName(QString::fromUtf8("label"));

        verticalLayout->addWidget(label);

        spinBox = new QSpinBox(layoutWidget);
        spinBox->setObjectName(QString::fromUtf8("spinBox"));

        verticalLayout->addWidget(spinBox);

        label_2 = new QLabel(layoutWidget);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        verticalLayout->addWidget(label_2);

        dateEdit = new QDateEdit(layoutWidget);
        dateEdit->setObjectName(QString::fromUtf8("dateEdit"));
        dateEdit->setCalendarPopup(true);

        verticalLayout->addWidget(dateEdit);

        pushButton = new QPushButton(layoutWidget);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));

        verticalLayout->addWidget(pushButton);

        layoutWidget1 = new QWidget(centralwidget);
        layoutWidget1->setObjectName(QString::fromUtf8("layoutWidget1"));
        layoutWidget1->setGeometry(QRect(60, 280, 657, 53));
        verticalLayout_2 = new QVBoxLayout(layoutWidget1);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        verticalLayout_2->setContentsMargins(0, 0, 0, 0);
        label_3 = new QLabel(layoutWidget1);
        label_3->setObjectName(QString::fromUtf8("label_3"));

        verticalLayout_2->addWidget(label_3);

        pushButton_2 = new QPushButton(layoutWidget1);
        pushButton_2->setObjectName(QString::fromUtf8("pushButton_2"));
        pushButton_2->setStyleSheet(QString::fromUtf8("color: rgb(85, 170, 255);\n"
"background-color: rgb(85, 170, 255);"));

        verticalLayout_2->addWidget(pushButton_2);

        AlegereDate->setCentralWidget(centralwidget);
        menubar = new QMenuBar(AlegereDate);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 807, 21));
        AlegereDate->setMenuBar(menubar);
        statusbar = new QStatusBar(AlegereDate);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        AlegereDate->setStatusBar(statusbar);

        retranslateUi(AlegereDate);

        QMetaObject::connectSlotsByName(AlegereDate);
    } // setupUi

    void retranslateUi(QMainWindow *AlegereDate)
    {
        AlegereDate->setWindowTitle(QCoreApplication::translate("AlegereDate", "MainWindow", nullptr));
        label->setText(QCoreApplication::translate("AlegereDate", "Alegeti numarul de etape dorit:", nullptr));
        label_2->setText(QCoreApplication::translate("AlegereDate", "Introduceti data finala pentru etapa 1", nullptr));
        dateEdit->setDisplayFormat(QCoreApplication::translate("AlegereDate", "dd-MM-yyyy", nullptr));
        pushButton->setText(QCoreApplication::translate("AlegereDate", "Adaugare", nullptr));
        label_3->setText(QCoreApplication::translate("AlegereDate", "Dupa introducerea tututor datelor va mutati in fereastra de vizualizare a datelor prin intermediul urmatorului buton", nullptr));
        pushButton_2->setText(QCoreApplication::translate("AlegereDate", "Finalizare Configurare", nullptr));
    } // retranslateUi

};

namespace Ui {
    class AlegereDate: public Ui_AlegereDate {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ALEGEREDATE_H
