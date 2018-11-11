/********************************************************************************
** Form generated from reading UI file 'FlowingSpeedChanges.ui'
**
** Created by: Qt User Interface Compiler version 5.11.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_FLOWINGSPEEDCHANGES_H
#define UI_FLOWINGSPEEDCHANGES_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDoubleSpinBox>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QTextEdit>

QT_BEGIN_NAMESPACE

class Ui_FlowingSpeedChanges
{
public:
    QSpinBox *time1;
    QLabel *label_time1;
    QSpinBox *time2;
    QLabel *label_time2;
    QLabel *label_sv1;
    QLabel *label_sv2;
    QDoubleSpinBox *sv1;
    QDoubleSpinBox *sv2;
    QComboBox *type;
    QSpinBox *step;
    QLabel *label_5;
    QTextEdit *output;
    QLabel *label_6;
    QPushButton *generate;
    QDoubleSpinBox *base;
    QLabel *label_base;

    void setupUi(QDialog *FlowingSpeedChanges)
    {
        if (FlowingSpeedChanges->objectName().isEmpty())
            FlowingSpeedChanges->setObjectName(QStringLiteral("FlowingSpeedChanges"));
        FlowingSpeedChanges->resize(529, 448);
        time1 = new QSpinBox(FlowingSpeedChanges);
        time1->setObjectName(QStringLiteral("time1"));
        time1->setGeometry(QRect(110, 30, 71, 22));
        time1->setMaximum(2147483647);
        label_time1 = new QLabel(FlowingSpeedChanges);
        label_time1->setObjectName(QStringLiteral("label_time1"));
        label_time1->setGeometry(QRect(40, 30, 51, 21));
        time2 = new QSpinBox(FlowingSpeedChanges);
        time2->setObjectName(QStringLiteral("time2"));
        time2->setGeometry(QRect(290, 30, 71, 22));
        time2->setMaximum(2147483647);
        label_time2 = new QLabel(FlowingSpeedChanges);
        label_time2->setObjectName(QStringLiteral("label_time2"));
        label_time2->setGeometry(QRect(220, 30, 51, 21));
        label_sv1 = new QLabel(FlowingSpeedChanges);
        label_sv1->setObjectName(QStringLiteral("label_sv1"));
        label_sv1->setGeometry(QRect(40, 70, 61, 21));
        label_sv2 = new QLabel(FlowingSpeedChanges);
        label_sv2->setObjectName(QStringLiteral("label_sv2"));
        label_sv2->setGeometry(QRect(220, 70, 61, 21));
        sv1 = new QDoubleSpinBox(FlowingSpeedChanges);
        sv1->setObjectName(QStringLiteral("sv1"));
        sv1->setGeometry(QRect(110, 70, 71, 22));
        sv1->setMaximum(10);
        sv1->setSingleStep(0.01);
        sv2 = new QDoubleSpinBox(FlowingSpeedChanges);
        sv2->setObjectName(QStringLiteral("sv2"));
        sv2->setGeometry(QRect(290, 70, 71, 22));
        sv2->setMaximum(10);
        sv2->setSingleStep(0.01);
        type = new QComboBox(FlowingSpeedChanges);
        type->addItem(QString());
        type->addItem(QString());
        type->addItem(QString());
        type->addItem(QString());
        type->addItem(QString());
        type->setObjectName(QStringLiteral("type"));
        type->setGeometry(QRect(220, 110, 141, 22));
        step = new QSpinBox(FlowingSpeedChanges);
        step->setObjectName(QStringLiteral("step"));
        step->setGeometry(QRect(110, 110, 71, 22));
        step->setMaximum(2147483647);
        label_5 = new QLabel(FlowingSpeedChanges);
        label_5->setObjectName(QStringLiteral("label_5"));
        label_5->setGeometry(QRect(40, 110, 51, 21));
        output = new QTextEdit(FlowingSpeedChanges);
        output->setObjectName(QStringLiteral("output"));
        output->setGeometry(QRect(40, 190, 441, 171));
        output->setReadOnly(true);
        label_6 = new QLabel(FlowingSpeedChanges);
        label_6->setObjectName(QStringLiteral("label_6"));
        label_6->setGeometry(QRect(240, 150, 47, 13));
        generate = new QPushButton(FlowingSpeedChanges);
        generate->setObjectName(QStringLiteral("generate"));
        generate->setGeometry(QRect(220, 390, 75, 23));
        base = new QDoubleSpinBox(FlowingSpeedChanges);
        base->setObjectName(QStringLiteral("base"));
        base->setGeometry(QRect(420, 60, 62, 22));
        base->setMaximum(10);
        label_base = new QLabel(FlowingSpeedChanges);
        label_base->setObjectName(QStringLiteral("label_base"));
        label_base->setGeometry(QRect(420, 30, 61, 16));

        retranslateUi(FlowingSpeedChanges);

        QMetaObject::connectSlotsByName(FlowingSpeedChanges);
    } // setupUi

    void retranslateUi(QDialog *FlowingSpeedChanges)
    {
        FlowingSpeedChanges->setWindowTitle(QApplication::translate("FlowingSpeedChanges", "FlowingSpeedChanges", nullptr));
        time1->setSuffix(QString());
        label_time1->setText(QApplication::translate("FlowingSpeedChanges", "Start Time", nullptr));
        label_time2->setText(QApplication::translate("FlowingSpeedChanges", "End Time", nullptr));
        label_sv1->setText(QApplication::translate("FlowingSpeedChanges", "Start/Min SV", nullptr));
        label_sv2->setText(QApplication::translate("FlowingSpeedChanges", "End/Max SV", nullptr));
        type->setItemText(0, QApplication::translate("FlowingSpeedChanges", "Linear", nullptr));
        type->setItemText(1, QApplication::translate("FlowingSpeedChanges", "Quadratic", nullptr));
        type->setItemText(2, QApplication::translate("FlowingSpeedChanges", "Sine", nullptr));
        type->setItemText(3, QApplication::translate("FlowingSpeedChanges", "Exponential", nullptr));
        type->setItemText(4, QApplication::translate("FlowingSpeedChanges", "Logarithmic", nullptr));

        label_5->setText(QApplication::translate("FlowingSpeedChanges", "Step", nullptr));
        label_6->setText(QApplication::translate("FlowingSpeedChanges", "Output:", nullptr));
        generate->setText(QApplication::translate("FlowingSpeedChanges", "Generate!", nullptr));
        label_base->setText(QApplication::translate("FlowingSpeedChanges", "Exp base:", nullptr));
    } // retranslateUi

};

namespace Ui {
    class FlowingSpeedChanges: public Ui_FlowingSpeedChanges {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_FLOWINGSPEEDCHANGES_H
