/********************************************************************************
** Form generated from reading UI file 'MoveTimingPoints.ui'
**
** Created by: Qt User Interface Compiler version 5.11.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MOVETIMINGPOINTS_H
#define UI_MOVETIMINGPOINTS_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MoveTimingPoints
{
public:
    QLabel *label_3;
    QTextEdit *movedTiming;
    QTextEdit *origTiming;
    QLabel *label_2;
    QLabel *label;
    QPushButton *move;
    QSpinBox *timeamount;

    void setupUi(QWidget *MoveTimingPoints)
    {
        if (MoveTimingPoints->objectName().isEmpty())
            MoveTimingPoints->setObjectName(QStringLiteral("MoveTimingPoints"));
        MoveTimingPoints->resize(400, 476);
        label_3 = new QLabel(MoveTimingPoints);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setGeometry(QRect(180, 240, 41, 16));
        movedTiming = new QTextEdit(MoveTimingPoints);
        movedTiming->setObjectName(QStringLiteral("movedTiming"));
        movedTiming->setGeometry(QRect(70, 270, 261, 141));
        movedTiming->setReadOnly(true);
        origTiming = new QTextEdit(MoveTimingPoints);
        origTiming->setObjectName(QStringLiteral("origTiming"));
        origTiming->setGeometry(QRect(70, 90, 261, 141));
        label_2 = new QLabel(MoveTimingPoints);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(140, 60, 131, 16));
        label = new QLabel(MoveTimingPoints);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(126, 20, 61, 21));
        move = new QPushButton(MoveTimingPoints);
        move->setObjectName(QStringLiteral("move"));
        move->setGeometry(QRect(160, 430, 75, 23));
        timeamount = new QSpinBox(MoveTimingPoints);
        timeamount->setObjectName(QStringLiteral("timeamount"));
        timeamount->setGeometry(QRect(200, 20, 71, 22));
        timeamount->setMaximum(2147483647);

        retranslateUi(MoveTimingPoints);

        QMetaObject::connectSlotsByName(MoveTimingPoints);
    } // setupUi

    void retranslateUi(QWidget *MoveTimingPoints)
    {
        MoveTimingPoints->setWindowTitle(QApplication::translate("MoveTimingPoints", "MoveTimingPoints", nullptr));
        label_3->setText(QApplication::translate("MoveTimingPoints", "Results:", nullptr));
        label_2->setText(QApplication::translate("MoveTimingPoints", "Paste timing points here:", nullptr));
        label->setText(QApplication::translate("MoveTimingPoints", "Time amount", nullptr));
        move->setText(QApplication::translate("MoveTimingPoints", "Move!", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MoveTimingPoints: public Ui_MoveTimingPoints {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MOVETIMINGPOINTS_H
