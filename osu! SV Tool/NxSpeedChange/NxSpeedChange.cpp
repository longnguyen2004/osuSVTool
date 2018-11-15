#include "stdafx.h"
#include "NxSpeedChange.h"

void NxSpeedChange::Calculate()
{
	double base = this->ui.baseSV->value();
	double first = this->ui.firstSV->value();
	double duration = this->ui.duration->value();
	double second = (base - first * duration) / (1 - duration);
	this->ui.secondSV->setValue(second);
}

NxSpeedChange::NxSpeedChange(QWidget *parent)
	: QDialog(parent)
{
	ui.setupUi(this);
	this->ui.baseSV->setSuffix(QStringLiteral("x"));
	this->ui.firstSV->setSuffix(QStringLiteral("x"));
	this->ui.secondSV->setSuffix(QStringLiteral("x"));
	connect(this->ui.calculateSV, SIGNAL(pressed()), this, SLOT(Calculate()));
	this->setAttribute(Qt::WA_DeleteOnClose);
}

NxSpeedChange::~NxSpeedChange()
{
}
