#pragma once

#include <QtWidgets/QMainWindow>
#include "ui_osuSVTool.h"

class osuSVTool : public QMainWindow
{
	Q_OBJECT

public:
	osuSVTool(QWidget *parent = Q_NULLPTR);

private:
	Ui::osuSVToolClass ui;

public slots:
	void ShowNxSpeedChange();
	void ShowBPMNormalize();
	void ShowMoveTimingPoints();
	// void ShowInheritedtoUninherited();
	void ShowFlowingSpeedChanges();
	void ShowBPMGenerator();
};
