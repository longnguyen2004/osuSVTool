#pragma once

#include <QWidget>
#include "ui_NxSpeedChange.h"

class NxSpeedChange : public QDialog
{
	Q_OBJECT

public:
	NxSpeedChange(QWidget *parent = Q_NULLPTR);
	~NxSpeedChange();

private:
	Ui::NxSpeedChange ui;

public slots:
	void Calculate();
};
