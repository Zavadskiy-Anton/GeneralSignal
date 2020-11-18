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
#include <QtWidgets/QDoubleSpinBox>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QSpinBox>
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
    QDoubleSpinBox *doubleSpinBox_2;
    QLabel *label_2;
    QDoubleSpinBox *doubleSpinBox_3;
    QLabel *label_3;
    QLabel *label_4;
    QDoubleSpinBox *doubleSpinBox_5;
    QLabel *label_5;
    QSpinBox *spinBox_2;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *GeneralSignal)
    {
        if (GeneralSignal->objectName().isEmpty())
            GeneralSignal->setObjectName(QString::fromUtf8("GeneralSignal"));
        GeneralSignal->resize(656, 584);
        centralwidget = new QWidget(GeneralSignal);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        pushButton = new QPushButton(centralwidget);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setGeometry(QRect(20, 10, 141, 101));
        groupBox = new QGroupBox(centralwidget);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        groupBox->setGeometry(QRect(530, 20, 111, 71));
        radioButton = new QRadioButton(groupBox);
        radioButton->setObjectName(QString::fromUtf8("radioButton"));
        radioButton->setGeometry(QRect(20, 30, 82, 17));
        radioButton->setChecked(true);
        radioButton_2 = new QRadioButton(groupBox);
        radioButton_2->setObjectName(QString::fromUtf8("radioButton_2"));
        radioButton_2->setGeometry(QRect(60, 30, 82, 17));
        graphicsView = new QChartView(centralwidget);
        graphicsView->setObjectName(QString::fromUtf8("graphicsView"));
        graphicsView->setGeometry(QRect(10, 120, 631, 411));
        doubleSpinBox_2 = new QDoubleSpinBox(centralwidget);
        doubleSpinBox_2->setObjectName(QString::fromUtf8("doubleSpinBox_2"));
        doubleSpinBox_2->setGeometry(QRect(180, 30, 71, 22));
        doubleSpinBox_2->setMaximum(32000.000000000000000);
        doubleSpinBox_2->setValue(32000.000000000000000);
        label_2 = new QLabel(centralwidget);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(180, 10, 47, 13));
        doubleSpinBox_3 = new QDoubleSpinBox(centralwidget);
        doubleSpinBox_3->setObjectName(QString::fromUtf8("doubleSpinBox_3"));
        doubleSpinBox_3->setGeometry(QRect(270, 30, 62, 22));
        doubleSpinBox_3->setSingleStep(0.100000000000000);
        doubleSpinBox_3->setValue(1.000000000000000);
        label_3 = new QLabel(centralwidget);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setGeometry(QRect(270, 10, 47, 13));
        label_4 = new QLabel(centralwidget);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setGeometry(QRect(360, 10, 47, 13));
        doubleSpinBox_5 = new QDoubleSpinBox(centralwidget);
        doubleSpinBox_5->setObjectName(QString::fromUtf8("doubleSpinBox_5"));
        doubleSpinBox_5->setGeometry(QRect(450, 30, 62, 22));
        doubleSpinBox_5->setMaximum(1.000000000000000);
        doubleSpinBox_5->setSingleStep(0.100000000000000);
        label_5 = new QLabel(centralwidget);
        label_5->setObjectName(QString::fromUtf8("label_5"));
        label_5->setGeometry(QRect(450, 10, 47, 13));
        spinBox_2 = new QSpinBox(centralwidget);
        spinBox_2->setObjectName(QString::fromUtf8("spinBox_2"));
        spinBox_2->setGeometry(QRect(360, 30, 42, 22));
        spinBox_2->setMinimum(1);
        spinBox_2->setMaximum(1000);
        spinBox_2->setValue(500);
        GeneralSignal->setCentralWidget(centralwidget);
        menubar = new QMenuBar(GeneralSignal);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 656, 21));
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
        label_2->setText(QCoreApplication::translate("GeneralSignal", "Max ampl", nullptr));
        label_3->setText(QCoreApplication::translate("GeneralSignal", "t povtor", nullptr));
        label_4->setText(QCoreApplication::translate("GeneralSignal", "chastota", nullptr));
        label_5->setText(QCoreApplication::translate("GeneralSignal", "Nach faza", nullptr));
    } // retranslateUi

};

namespace Ui {
    class GeneralSignal: public Ui_GeneralSignal {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_GENERALSIGNAL_H
