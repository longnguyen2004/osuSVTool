/********************************************************************************
** Form generated from reading UI file 'osuSVTool.ui'
**
** Created by: Qt User Interface Compiler version 5.11.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_OSUSVTOOL_H
#define UI_OSUSVTOOL_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QToolBar>
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
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *osuSVToolClass)
    {
        if (osuSVToolClass->objectName().isEmpty())
            osuSVToolClass->setObjectName(QStringLiteral("osuSVToolClass"));
        osuSVToolClass->resize(541, 282);
        centralWidget = new QWidget(osuSVToolClass);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        NxSpeedChange = new QPushButton(centralWidget);
        NxSpeedChange->setObjectName(QStringLiteral("NxSpeedChange"));
        NxSpeedChange->setGeometry(QRect(40, 10, 201, 51));
        BPMNormalize = new QPushButton(centralWidget);
        BPMNormalize->setObjectName(QStringLiteral("BPMNormalize"));
        BPMNormalize->setGeometry(QRect(300, 10, 201, 51));
        MoveTimingPoints = new QPushButton(centralWidget);
        MoveTimingPoints->setObjectName(QStringLiteral("MoveTimingPoints"));
        MoveTimingPoints->setGeometry(QRect(40, 80, 201, 51));
        InheritUninherit = new QPushButton(centralWidget);
        InheritUninherit->setObjectName(QStringLiteral("InheritUninherit"));
        InheritUninherit->setGeometry(QRect(300, 80, 201, 51));
        FlowingSpeedChanges = new QPushButton(centralWidget);
        FlowingSpeedChanges->setObjectName(QStringLiteral("FlowingSpeedChanges"));
        FlowingSpeedChanges->setGeometry(QRect(40, 150, 201, 51));
        osuSVToolClass->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(osuSVToolClass);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 541, 21));
        osuSVToolClass->setMenuBar(menuBar);
        mainToolBar = new QToolBar(osuSVToolClass);
        mainToolBar->setObjectName(QStringLiteral("mainToolBar"));
        osuSVToolClass->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(osuSVToolClass);
        statusBar->setObjectName(QStringLiteral("statusBar"));
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
        InheritUninherit->setText(QApplication::translate("osuSVToolClass", "Inherited -> Uninherited", nullptr));
        FlowingSpeedChanges->setText(QApplication::translate("osuSVToolClass", "Flowing speedups and slowdowns", nullptr));
    } // retranslateUi

};

namespace Ui {
    class osuSVToolClass: public Ui_osuSVToolClass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_OSUSVTOOL_H
