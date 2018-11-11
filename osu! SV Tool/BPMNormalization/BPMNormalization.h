#pragma once

#include <QWidget>
#include "ui_BPMNormalization.h"

class BPMNormalization : public QDialog
{
	Q_OBJECT

public:
	BPMNormalization(QWidget *parent = Q_NULLPTR);
	~BPMNormalization();

private:
	Ui::BPMNormalization ui;

public slots:
	void Normalize();
};
