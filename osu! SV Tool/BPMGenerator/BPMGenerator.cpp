#include "stdafx.h"
#include "BPMGenerator.h"
#include "..\TimingPointClass\TimingPointClass.hpp"

void BPMGenerator::Generate()
{
	this->ui.output->clear();
	unsigned long long startbpm = this->ui.start->value();
	unsigned long long bpmstep = this->ui.bpmstep->value();
	unsigned long long endbpm = this->ui.end->value() + bpmstep;
	unsigned int beatstep = this->ui.beatstep->value();
	unsigned long long startoffset = this->ui.startoffset->value();
	double currentoffset = startoffset;
	double bpmcorr = this->ui.bpmcorr->value();
	for (unsigned long long currentbpm = startbpm; currentbpm != endbpm; currentbpm += bpmstep)
	{
		double millisperbeat = 60000 / (currentbpm + bpmcorr);
		UninheritedTimingPoint timing(currentoffset, currentbpm);
		this->ui.output->append(QString::fromStdString(timing.to_string()));
		currentoffset += millisperbeat * beatstep;
	}
}

BPMGenerator::BPMGenerator(QWidget *parent)
	: QDialog(parent)
{
	ui.setupUi(this);
	connect(this->ui.generate, SIGNAL(pressed()), this, SLOT(Generate()));
	this->setAttribute(Qt::WA_DeleteOnClose);
}

BPMGenerator::~BPMGenerator()
{
}
