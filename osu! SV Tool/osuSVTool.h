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
};
