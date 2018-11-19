#pragma once

#include <QDialog>
#include "ui_BPMGenerator.h"

class BPMGenerator : public QDialog
{
	Q_OBJECT

public:
	BPMGenerator(QWidget *parent = Q_NULLPTR);
	~BPMGenerator();

private:
	Ui::BPMGenerator ui;

public slots:
	void Generate();
};
