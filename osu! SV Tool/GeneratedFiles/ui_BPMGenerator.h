/********************************************************************************
** Form generated from reading UI file 'BPMGenerator.ui'
**
** Created by: Qt User Interface Compiler version 5.11.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_BPMGENERATOR_H
#define UI_BPMGENERATOR_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDoubleSpinBox>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QTextEdit>

QT_BEGIN_NAMESPACE

class Ui_BPMGenerator
{
public:
    QLabel *label;
    QLabel *label_2;
    QLabel *label_3;
    QLabel *label_6;
    QTextEdit *output;
    QLabel *label_7;
    QPushButton *generate;
    QLabel *label_4;
    QSpinBox *beatstep;
    QSpinBox *bpmstep;
    QSpinBox *start;
    QSpinBox *end;
    QSpinBox *startoffset;
    QLabel *label_5;
    QLabel *label_8;
    QDoubleSpinBox *bpmcorr;

    void setupUi(QDialog *BPMGenerator)
    {
        if (BPMGenerator->objectName().isEmpty())
            BPMGenerator->setObjectName(QStringLiteral("BPMGenerator"));
        BPMGenerator->resize(510, 449);
        label = new QLabel(BPMGenerator);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(60, 30, 51, 21));
        label_2 = new QLabel(BPMGenerator);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(60, 60, 51, 21));
        label_3 = new QLabel(BPMGenerator);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setGeometry(QRect(230, 30, 51, 21));
        label_6 = new QLabel(BPMGenerator);
        label_6->setObjectName(QStringLiteral("label_6"));
        label_6->setGeometry(QRect(240, 120, 47, 16));
        output = new QTextEdit(BPMGenerator);
        output->setObjectName(QStringLiteral("output"));
        output->setGeometry(QRect(30, 150, 451, 211));
        output->setReadOnly(true);
        label_7 = new QLabel(BPMGenerator);
        label_7->setObjectName(QStringLiteral("label_7"));
        label_7->setGeometry(QRect(380, 30, 111, 81));
        label_7->setTextFormat(Qt::AutoText);
        label_7->setScaledContents(false);
        label_7->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignTop);
        label_7->setWordWrap(true);
        generate = new QPushButton(BPMGenerator);
        generate->setObjectName(QStringLiteral("generate"));
        generate->setGeometry(QRect(220, 390, 75, 23));
        label_4 = new QLabel(BPMGenerator);
        label_4->setObjectName(QStringLiteral("label_4"));
        label_4->setGeometry(QRect(230, 60, 51, 21));
        beatstep = new QSpinBox(BPMGenerator);
        beatstep->setObjectName(QStringLiteral("beatstep"));
        beatstep->setGeometry(QRect(290, 60, 51, 22));
        beatstep->setMinimum(1);
        beatstep->setMaximum(16);
        bpmstep = new QSpinBox(BPMGenerator);
        bpmstep->setObjectName(QStringLiteral("bpmstep"));
        bpmstep->setGeometry(QRect(290, 30, 51, 22));
        bpmstep->setMinimum(-10);
        bpmstep->setMaximum(10);
        start = new QSpinBox(BPMGenerator);
        start->setObjectName(QStringLiteral("start"));
        start->setGeometry(QRect(120, 30, 51, 22));
        start->setMaximum(2147483647);
        end = new QSpinBox(BPMGenerator);
        end->setObjectName(QStringLiteral("end"));
        end->setGeometry(QRect(120, 60, 51, 22));
        end->setMaximum(2147483647);
        startoffset = new QSpinBox(BPMGenerator);
        startoffset->setObjectName(QStringLiteral("startoffset"));
        startoffset->setGeometry(QRect(290, 90, 51, 22));
        startoffset->setMaximum(2147483647);
        label_5 = new QLabel(BPMGenerator);
        label_5->setObjectName(QStringLiteral("label_5"));
        label_5->setGeometry(QRect(230, 90, 61, 21));
        label_8 = new QLabel(BPMGenerator);
        label_8->setObjectName(QStringLiteral("label_8"));
        label_8->setGeometry(QRect(30, 90, 81, 21));
        bpmcorr = new QDoubleSpinBox(BPMGenerator);
        bpmcorr->setObjectName(QStringLiteral("bpmcorr"));
        bpmcorr->setGeometry(QRect(120, 90, 61, 22));
        bpmcorr->setDecimals(5);
        bpmcorr->setMinimum(-1);
        bpmcorr->setMaximum(1);
        bpmcorr->setSingleStep(0.005);

        retranslateUi(BPMGenerator);

        QMetaObject::connectSlotsByName(BPMGenerator);
    } // setupUi

    void retranslateUi(QDialog *BPMGenerator)
    {
        BPMGenerator->setWindowTitle(QApplication::translate("BPMGenerator", "BPMGenerator", nullptr));
        label->setText(QApplication::translate("BPMGenerator", "Start BPM", nullptr));
        label_2->setText(QApplication::translate("BPMGenerator", "End BPM", nullptr));
        label_3->setText(QApplication::translate("BPMGenerator", "BPM Step", nullptr));
        label_6->setText(QApplication::translate("BPMGenerator", "Output", nullptr));
        label_7->setText(QApplication::translate("BPMGenerator", "NOTE: Ensure that the increment is divisible with the BPM difference, otherwise the calculations might be wrong!", nullptr));
        generate->setText(QApplication::translate("BPMGenerator", "Generate!", nullptr));
        label_4->setText(QApplication::translate("BPMGenerator", "Beat Step", nullptr));
        label_5->setText(QApplication::translate("BPMGenerator", "Start Offset", nullptr));
        label_8->setText(QApplication::translate("BPMGenerator", "BPM Correction", nullptr));
    } // retranslateUi

};

namespace Ui {
    class BPMGenerator: public Ui_BPMGenerator {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_BPMGENERATOR_H
