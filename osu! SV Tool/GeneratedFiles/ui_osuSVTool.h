/********************************************************************************
** Form generated from reading UI file 'osuSVTool.ui'
**
** Created by: Qt User Interface Compiler version 5.12.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_OSUSVTOOL_H
#define UI_OSUSVTOOL_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_osuSVToolClass
{
public:
    QWidget *centralWidget;
    QPushButton *NxSpeedChange;
    QPushButton *BPMNormalize;
    QPushButton *MoveTimingPoints;
    QPushButton *InheritUninherit;
    QPushButton *FlowingSpeedChanges;
    QPushButton *BPMGen;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *osuSVToolClass)
    {
        if (osuSVToolClass->objectName().isEmpty())
            osuSVToolClass->setObjectName(QString::fromUtf8("osuSVToolClass"));
        osuSVToolClass->resize(541, 282);
        centralWidget = new QWidget(osuSVToolClass);
        centralWidget->setObjectName(QString::fromUtf8("centralWidget"));
        NxSpeedChange = new QPushButton(centralWidget);
        NxSpeedChange->setObjectName(QString::fromUtf8("NxSpeedChange"));
        NxSpeedChange->setGeometry(QRect(40, 40, 201, 51));
        BPMNormalize = new QPushButton(centralWidget);
        BPMNormalize->setObjectName(QString::fromUtf8("BPMNormalize"));
        BPMNormalize->setGeometry(QRect(300, 40, 201, 51));
        MoveTimingPoints = new QPushButton(centralWidget);
        MoveTimingPoints->setObjectName(QString::fromUtf8("MoveTimingPoints"));
        MoveTimingPoints->setGeometry(QRect(40, 110, 201, 51));
        InheritUninherit = new QPushButton(centralWidget);
        InheritUninherit->setObjectName(QString::fromUtf8("InheritUninherit"));
        InheritUninherit->setGeometry(QRect(300, 110, 201, 51));
        FlowingSpeedChanges = new QPushButton(centralWidget);
        FlowingSpeedChanges->setObjectName(QString::fromUtf8("FlowingSpeedChanges"));
        FlowingSpeedChanges->setGeometry(QRect(40, 180, 201, 51));
        BPMGen = new QPushButton(centralWidget);
        BPMGen->setObjectName(QString::fromUtf8("BPMGen"));
        BPMGen->setGeometry(QRect(300, 180, 201, 51));
        osuSVToolClass->setCentralWidget(centralWidget);
        statusBar = new QStatusBar(osuSVToolClass);
        statusBar->setObjectName(QString::fromUtf8("statusBar"));
        osuSVToolClass->setStatusBar(statusBar);

        retranslateUi(osuSVToolClass);

        QMetaObject::connectSlotsByName(osuSVToolClass);
    } // setupUi

    void retranslateUi(QMainWindow *osuSVToolClass)
    {
        osuSVToolClass->setWindowTitle(QApplication::translate("osuSVToolClass", "osuSVTool", nullptr));
        NxSpeedChange->setText(QApplication::translate("osuSVToolClass", "Calculate Nx-looking speed change\n"
"(For bumps, glitches, etc...)", nullptr));
        BPMNormalize->setText(QApplication::translate("osuSVToolClass", "Normalize BPM changes", nullptr));
        MoveTimingPoints->setText(QApplication::translate("osuSVToolClass", "Move timing points", nullptr));
        InheritUninherit->setText(QApplication::translate("osuSVToolClass", "Inherited <-> Uninherited\n"
"(Useful for osu! <-> BMS conversion)", nullptr));
        FlowingSpeedChanges->setText(QApplication::translate("osuSVToolClass", "Flowing speedups and slowdowns", nullptr));
        BPMGen->setText(QApplication::translate("osuSVToolClass", "Aleph-0 style BPM generator", nullptr));
    } // retranslateUi

};

namespace Ui {
    class osuSVToolClass: public Ui_osuSVToolClass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_OSUSVTOOL_H
