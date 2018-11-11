#include "stdafx.h"
#include "MoveTimingPoints.h"
#include "TimingPointClass/TimingPointClass.hpp"

void MoveTimingPoints::Move()
{
	this->ui.movedTiming->clear();
	unsigned long long timeduration = this->ui.timeamount->value();
	QString data = this->ui.origTiming->toPlainText();
	QTextStream st(&data, QIODevice::ReadOnly);
	while (!st.atEnd())
	{
		QString timingstr = st.readLine();
		TimingPoint orig(timingstr.toStdString());
		orig.offset += timeduration;
		this->ui.movedTiming->append(QString::fromStdString(orig.to_string()));
	}
}

MoveTimingPoints::MoveTimingPoints(QWidget *parent)
	: QDialog(parent)
{
	ui.setupUi(this);
	connect(this->ui.move, SIGNAL(pressed()), this, SLOT(Move()));
	this->ui.timeamount->setSuffix(QStringLiteral("ms"));
	this->setAttribute(Qt::WA_DeleteOnClose);
}

MoveTimingPoints::~MoveTimingPoints()
{
}
