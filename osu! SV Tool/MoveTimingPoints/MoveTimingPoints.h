#pragma once

#include <QWidget>
#include "ui_MoveTimingPoints.h"

class MoveTimingPoints : public QDialog
{
	Q_OBJECT

public:
	MoveTimingPoints(QWidget *parent = Q_NULLPTR);
	~MoveTimingPoints();

private:
	Ui::MoveTimingPoints ui;

public slots:
	void Move();
};
