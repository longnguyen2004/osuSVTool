/********************************************************************************
** Form generated from reading UI file 'InheritUninherit.ui'
**
** Created by: Qt User Interface Compiler version 5.12.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_INHERITUNINHERIT_H
#define UI_INHERITUNINHERIT_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDoubleSpinBox>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QLabel>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QTextEdit>

QT_BEGIN_NAMESPACE

class Ui_InheritUninherit
{
public:
    QGroupBox *groupBox;
    QRadioButton *mode1;
    QRadioButton *mode2;
    QTextEdit *input;
    QLabel *label;
    QTextEdit *output;
    QLabel *label_2;
    QDoubleSpinBox *doubleSpinBox;

    void setupUi(QDialog *InheritUninherit)
    {
        if (InheritUninherit->objectName().isEmpty())
            InheritUninherit->setObjectName(QString::fromUtf8("InheritUninherit"));
        InheritUninherit->resize(400, 551);
        groupBox = new QGroupBox(InheritUninherit);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        groupBox->setGeometry(QRect(20, 10, 151, 71));
        mode1 = new QRadioButton(groupBox);
        mode1->setObjectName(QString::fromUtf8("mode1"));
        mode1->setGeometry(QRect(10, 20, 141, 17));
        mode2 = new QRadioButton(groupBox);
        mode2->setObjectName(QString::fromUtf8("mode2"));
        mode2->setGeometry(QRect(10, 40, 141, 17));
        input = new QTextEdit(InheritUninherit);
        input->setObjectName(QString::fromUtf8("input"));
        input->setGeometry(QRect(20, 120, 361, 181));
        label = new QLabel(InheritUninherit);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(180, 90, 47, 13));
        output = new QTextEdit(InheritUninherit);
        output->setObjectName(QString::fromUtf8("output"));
        output->setGeometry(QRect(20, 340, 361, 181));
        output->setReadOnly(true);
        label_2 = new QLabel(InheritUninherit);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(180, 310, 47, 13));
        doubleSpinBox = new QDoubleSpinBox(InheritUninherit);
        doubleSpinBox->setObjectName(QString::fromUtf8("doubleSpinBox"));
        doubleSpinBox->setGeometry(QRect(260, 30, 62, 22));

        retranslateUi(InheritUninherit);

        QMetaObject::connectSlotsByName(InheritUninherit);
    } // setupUi

    void retranslateUi(QDialog *InheritUninherit)
    {
        InheritUninherit->setWindowTitle(QApplication::translate("InheritUninherit", "InheritUninherit", nullptr));
        groupBox->setTitle(QApplication::translate("InheritUninherit", "Mode", nullptr));
        mode1->setText(QApplication::translate("InheritUninherit", "Inherited to Uninherited", nullptr));
        mode2->setText(QApplication::translate("InheritUninherit", "Uninherited to Inherited", nullptr));
        label->setText(QApplication::translate("InheritUninherit", "Input:", nullptr));
        label_2->setText(QApplication::translate("InheritUninherit", "Output:", nullptr));
    } // retranslateUi

};

namespace Ui {
    class InheritUninherit: public Ui_InheritUninherit {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_INHERITUNINHERIT_H
