#include "stdafx.h"
#include "osuSVTool.h"
#include "NxSpeedChange.h"
#include "BPMNormalization.h"
#include "MoveTimingPoints.h"
#include "FlowingSpeedChanges.h"
#include "BPMGenerator.h"

osuSVTool::osuSVTool(QWidget *parent)
	: QMainWindow(parent)
{
	ui.setupUi(this);
	connect(this->ui.NxSpeedChange, &QPushButton::pressed, []() {
		NxSpeedChange *w = new NxSpeedChange();
		w->exec();
	});
	connect(this->ui.BPMNormalize, &QPushButton::pressed, []() {
		BPMNormalization *w = new BPMNormalization();
		w->exec();
	});
	connect(this->ui.MoveTimingPoints, &QPushButton::pressed, []() {
		MoveTimingPoints *w = new MoveTimingPoints();
		w->exec();
	});
	connect(this->ui.FlowingSpeedChanges, &QPushButton::pressed, []() {
		FlowingSpeedChanges *w = new FlowingSpeedChanges();
		w->exec();
	});
	connect(this->ui.BPMGen, &QPushButton::pressed, []() {
		BPMGenerator *w = new BPMGenerator();
		w->exec();
	});
}
