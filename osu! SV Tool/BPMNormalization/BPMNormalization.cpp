#include "stdafx.h"
#include "BPMNormalization.h"
#include "TimingPointClass/TimingPointClass.hpp"

void BPMNormalization::Normalize()
{
	this->ui.normSV->clear();
	double base = this->ui.baseBPM->value();
	QString data = this->ui.origTiming->toPlainText();
	QTextStream st(&data, QIODevice::ReadOnly);
	while (!st.atEnd())
	{
		QString timingstr = st.readLine();
		UninheritedTimingPoint orig(timingstr.toStdString());
		double newSV = base / orig.bpm;
		InheritedTimingPoint norm(orig.offset, newSV, orig.meter, orig.sampleset, orig.sampleindex, orig.volume, orig.kiai);
		this->ui.normSV->append(QString::fromStdString(norm.to_string()));
	}
}

BPMNormalization::BPMNormalization(QWidget *parent)
	: QDialog(parent)
{
	ui.setupUi(this);
	connect(this->ui.normalize, SIGNAL(pressed()), this, SLOT(Normalize()));
	this->setAttribute(Qt::WA_DeleteOnClose);
}

BPMNormalization::~BPMNormalization()
{
}
