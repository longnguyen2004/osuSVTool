#include "stdafx.h"
#include "osuSVTool.h"
#include "NxSpeedChange.h"
#include "BPMNormalization.h"
#include "MoveTimingPoints.h"
#include "FlowingSpeedChanges.h"
#include "BPMGenerator.h"

void osuSVTool::ShowNxSpeedChange()
{
	NxSpeedChange *w = new NxSpeedChange();
	w->exec();
}

void osuSVTool::ShowBPMNormalize()
{
	BPMNormalization *w = new BPMNormalization();
	w->exec();
}

void osuSVTool::ShowMoveTimingPoints()
{
	MoveTimingPoints *w = new MoveTimingPoints();
	w->exec();
}

void osuSVTool::ShowFlowingSpeedChanges()
{
	FlowingSpeedChanges *w = new FlowingSpeedChanges();
	w->exec();
}

void osuSVTool::ShowBPMGenerator()
{
	BPMGenerator *w = new BPMGenerator();
	w->exec();
}

osuSVTool::osuSVTool(QWidget *parent)
	: QMainWindow(parent)
{
	ui.setupUi(this);
	connect(this->ui.NxSpeedChange, SIGNAL(pressed()), this, SLOT(ShowNxSpeedChange()));
	connect(this->ui.BPMNormalize, SIGNAL(pressed()), this, SLOT(ShowBPMNormalize()));
	connect(this->ui.MoveTimingPoints, SIGNAL(pressed()), this, SLOT(ShowMoveTimingPoints()));
	connect(this->ui.InheritUninherit, SIGNAL(pressed()), this, SLOT(ShowInheritedtoUninherited()));
	connect(this->ui.FlowingSpeedChanges, SIGNAL(pressed()), this, SLOT(ShowFlowingSpeedChanges()));
	connect(this->ui.BPMGen, SIGNAL(pressed()), this, SLOT(ShowBPMGenerator()));
}
