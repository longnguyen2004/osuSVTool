/********************************************************************************
** Form generated from reading UI file 'NxSpeedChange.ui'
**
** Created by: Qt User Interface Compiler version 5.12.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_NXSPEEDCHANGE_H
#define UI_NXSPEEDCHANGE_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDoubleSpinBox>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_NxSpeedChange
{
public:
    QDoubleSpinBox *baseSV;
    QLabel *label;
    QDoubleSpinBox *firstSV;
    QLabel *label_2;
    QDoubleSpinBox *duration;
    QLabel *label_3;
    QDoubleSpinBox *secondSV;
    QLabel *label_4;
    QPushButton *calculateSV;

    void setupUi(QWidget *NxSpeedChange)
    {
        if (NxSpeedChange->objectName().isEmpty())
            NxSpeedChange->setObjectName(QString::fromUtf8("NxSpeedChange"));
        NxSpeedChange->resize(400, 208);
        baseSV = new QDoubleSpinBox(NxSpeedChange);
        baseSV->setObjectName(QString::fromUtf8("baseSV"));
        baseSV->setGeometry(QRect(190, 30, 62, 22));
        baseSV->setMinimum(0.010000000000000);
        baseSV->setMaximum(10.000000000000000);
        baseSV->setSingleStep(0.010000000000000);
        label = new QLabel(NxSpeedChange);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(130, 30, 47, 21));
        firstSV = new QDoubleSpinBox(NxSpeedChange);
        firstSV->setObjectName(QString::fromUtf8("firstSV"));
        firstSV->setGeometry(QRect(90, 70, 62, 22));
        firstSV->setMinimum(0.010000000000000);
        firstSV->setMaximum(10.000000000000000);
        firstSV->setSingleStep(0.010000000000000);
        label_2 = new QLabel(NxSpeedChange);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(36, 70, 41, 20));
        duration = new QDoubleSpinBox(NxSpeedChange);
        duration->setObjectName(QString::fromUtf8("duration"));
        duration->setGeometry(QRect(300, 70, 62, 22));
        duration->setDecimals(3);
        duration->setMinimum(0.001000000000000);
        duration->setMaximum(1.000000000000000);
        duration->setSingleStep(0.001000000000000);
        duration->setValue(0.001000000000000);
        label_3 = new QLabel(NxSpeedChange);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setGeometry(QRect(196, 65, 91, 30));
        label_3->setAlignment(Qt::AlignCenter);
        secondSV = new QDoubleSpinBox(NxSpeedChange);
        secondSV->setObjectName(QString::fromUtf8("secondSV"));
        secondSV->setGeometry(QRect(190, 110, 62, 22));
        secondSV->setReadOnly(true);
        label_4 = new QLabel(NxSpeedChange);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setGeometry(QRect(116, 110, 61, 21));
        calculateSV = new QPushButton(NxSpeedChange);
        calculateSV->setObjectName(QString::fromUtf8("calculateSV"));
        calculateSV->setGeometry(QRect(160, 160, 75, 23));

        retranslateUi(NxSpeedChange);

        QMetaObject::connectSlotsByName(NxSpeedChange);
    } // setupUi

    void retranslateUi(QWidget *NxSpeedChange)
    {
        NxSpeedChange->setWindowTitle(QApplication::translate("NxSpeedChange", "NxSpeedChange", nullptr));
        baseSV->setSuffix(QString());
        label->setText(QApplication::translate("NxSpeedChange", "Base SV:", nullptr));
        firstSV->setSuffix(QString());
        label_2->setText(QApplication::translate("NxSpeedChange", "First SV:", nullptr));
        duration->setSuffix(QString());
        label_3->setText(QApplication::translate("NxSpeedChange", "Time duration\n"
"(in fraction)", nullptr));
        label_4->setText(QApplication::translate("NxSpeedChange", "Second SV:", nullptr));
        calculateSV->setText(QApplication::translate("NxSpeedChange", "Calculate!", nullptr));
    } // retranslateUi

};

namespace Ui {
    class NxSpeedChange: public Ui_NxSpeedChange {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_NXSPEEDCHANGE_H
