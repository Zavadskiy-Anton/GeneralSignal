/********************************************************************************
** Form generated from reading UI file 'generalsignal.ui'
**
** Created by: Qt User Interface Compiler version 5.14.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_GENERALSIGNAL_H
#define UI_GENERALSIGNAL_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>
#include "QtCharts"

QT_BEGIN_NAMESPACE

class Ui_GeneralSignal
{
public:
    QWidget *centralwidget;
    QPushButton *pushButton;
    QGroupBox *groupBox;
    QRadioButton *radioButton;
    QRadioButton *radioButton_2;
    QChartView *graphicsView;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *GeneralSignal)
    {
        if (GeneralSignal->objectName().isEmpty())
            GeneralSignal->setObjectName(QString::fromUtf8("GeneralSignal"));
        GeneralSignal->resize(603, 427);
        centralwidget = new QWidget(GeneralSignal);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        pushButton = new QPushButton(centralwidget);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setGeometry(QRect(20, 10, 141, 71));
        groupBox = new QGroupBox(centralwidget);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        groupBox->setGeometry(QRect(230, 10, 351, 71));
        radioButton = new QRadioButton(groupBox);
        radioButton->setObjectName(QString::fromUtf8("radioButton"));
        radioButton->setGeometry(QRect(40, 30, 82, 17));
        radioButton_2 = new QRadioButton(groupBox);
        radioButton_2->setObjectName(QString::fromUtf8("radioButton_2"));
        radioButton_2->setGeometry(QRect(160, 30, 82, 17));
        graphicsView = new QChartView(centralwidget);
        graphicsView->setObjectName(QString::fromUtf8("graphicsView"));
        graphicsView->setGeometry(QRect(10, 90, 571, 281));
        GeneralSignal->setCentralWidget(centralwidget);
        menubar = new QMenuBar(GeneralSignal);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 603, 21));
        GeneralSignal->setMenuBar(menubar);
        statusbar = new QStatusBar(GeneralSignal);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        GeneralSignal->setStatusBar(statusbar);

        retranslateUi(GeneralSignal);

        QMetaObject::connectSlotsByName(GeneralSignal);
    } // setupUi

    void retranslateUi(QMainWindow *GeneralSignal)
    {
        GeneralSignal->setWindowTitle(QCoreApplication::translate("GeneralSignal", "GeneralSignal", nullptr));
        pushButton->setText(QCoreApplication::translate("GeneralSignal", "Generate", nullptr));
        groupBox->setTitle(QCoreApplication::translate("GeneralSignal", "Type signal", nullptr));
        radioButton->setText(QCoreApplication::translate("GeneralSignal", "Sin", nullptr));
        radioButton_2->setText(QCoreApplication::translate("GeneralSignal", "Cos", nullptr));
    } // retranslateUi

};

namespace Ui {
    class GeneralSignal: public Ui_GeneralSignal {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_GENERALSIGNAL_H
