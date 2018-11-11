#pragma once

#include <QDialog>
#include "ui_FlowingSpeedChanges.h"

class FlowingSpeedChanges : public QDialog
{
	Q_OBJECT

public:
	FlowingSpeedChanges(QWidget *parent = Q_NULLPTR);
	~FlowingSpeedChanges();

private:
	Ui::FlowingSpeedChanges ui;

public slots:
	void Generate();
	void ExtraSettings(int mode);
};
