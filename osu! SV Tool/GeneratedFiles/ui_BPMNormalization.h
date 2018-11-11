/********************************************************************************
** Form generated from reading UI file 'BPMNormalization.ui'
**
** Created by: Qt User Interface Compiler version 5.11.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_BPMNORMALIZATION_H
#define UI_BPMNORMALIZATION_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDoubleSpinBox>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_BPMNormalization
{
public:
    QDoubleSpinBox *baseBPM;
    QLabel *label;
    QTextEdit *origTiming;
    QLabel *label_2;
    QTextEdit *normSV;
    QLabel *label_3;
    QPushButton *normalize;

    void setupUi(QWidget *BPMNormalization)
    {
        if (BPMNormalization->objectName().isEmpty())
            BPMNormalization->setObjectName(QStringLiteral("BPMNormalization"));
        BPMNormalization->resize(400, 479);
        baseBPM = new QDoubleSpinBox(BPMNormalization);
        baseBPM->setObjectName(QStringLiteral("baseBPM"));
        baseBPM->setGeometry(QRect(200, 20, 62, 22));
        baseBPM->setMaximum(2.14748e+9);
        label = new QLabel(BPMNormalization);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(140, 20, 47, 21));
        origTiming = new QTextEdit(BPMNormalization);
        origTiming->setObjectName(QStringLiteral("origTiming"));
        origTiming->setGeometry(QRect(70, 90, 261, 141));
        label_2 = new QLabel(BPMNormalization);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(140, 60, 131, 16));
        normSV = new QTextEdit(BPMNormalization);
        normSV->setObjectName(QStringLiteral("normSV"));
        normSV->setGeometry(QRect(70, 270, 261, 141));
        normSV->setReadOnly(true);
        label_3 = new QLabel(BPMNormalization);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setGeometry(QRect(180, 240, 41, 16));
        normalize = new QPushButton(BPMNormalization);
        normalize->setObjectName(QStringLiteral("normalize"));
        normalize->setGeometry(QRect(160, 430, 75, 23));

        retranslateUi(BPMNormalization);

        QMetaObject::connectSlotsByName(BPMNormalization);
    } // setupUi

    void retranslateUi(QWidget *BPMNormalization)
    {
        BPMNormalization->setWindowTitle(QApplication::translate("BPMNormalization", "BPMNormalization", nullptr));
        label->setText(QApplication::translate("BPMNormalization", "Base BPM", nullptr));
        label_2->setText(QApplication::translate("BPMNormalization", "Paste timing points here:", nullptr));
        label_3->setText(QApplication::translate("BPMNormalization", "Results:", nullptr));
        normalize->setText(QApplication::translate("BPMNormalization", "Normalize!", nullptr));
    } // retranslateUi

};

namespace Ui {
    class BPMNormalization: public Ui_BPMNormalization {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_BPMNORMALIZATION_H
