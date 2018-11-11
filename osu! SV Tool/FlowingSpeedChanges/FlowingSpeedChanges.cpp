#include "stdafx.h"
#include "FlowingSpeedChanges.h"
#include "TimingPointClass/TimingPointClass.hpp"
#include <cmath>

#define PI acos(-1)

double logn(double base, double x)													// base-n log
{
	return log(x) / log(base);
}

double map(double val, double a, double b, double c, double d)
{
	return (val - a) * (d - c) / (b - a) + c;
}

void FlowingSpeedChanges::ExtraSettings(int mode)
{
	switch (mode)
	{
		case 3:																		// Exponential settings
		{
			this->ui.label_base->setHidden(false);
			this->ui.base->setHidden(false);
			this->ui.label_base->setText(QStringLiteral("Exp base:"));
			break;
		}
		case 4:																		// Logarithmic settings
		{
			this->ui.label_base->setHidden(false);
			this->ui.base->setHidden(false);
			this->ui.label_base->setText(QStringLiteral("Log base"));
			break;
		}
		default:
		{
			this->ui.label_base->setHidden(true);
			this->ui.base->setHidden(true);
			break;
		}
	}
}

void FlowingSpeedChanges::Generate()
{
	this->ui.output->clear();
	double time1 = this->ui.time1->value();
	double time2 = this->ui.time2->value();							
	double sv1 = this->ui.sv1->value();
	double sv2 = this->ui.sv2->value();
	unsigned int step = this->ui.step->value();
	unsigned long long currentoffset;
	double timestep = floor((time2 - time1) / step);
	unsigned int mode = this->ui.type->currentIndex();
	double currentsv;
	for (unsigned int currentstep = 0; currentstep <= step; currentstep++)
	{
		currentoffset = time1 + timestep * currentstep;
		switch (mode)
		{
			case 0:																			// Linear
			{
				double svstep = (sv2 - sv1) / step;
				currentsv = sv1 + svstep * currentstep;
				break;
			}
			case 1:																			// Quadratic
			{
				double svstep = (sv2 - sv1) / step;
				currentsv = sv1 + pow((double)currentstep / (double)step, 2) * svstep;
				break;
			}
			case 2:																			// Sine
			{
				double mag = sv2 - sv1;
				currentsv = sv1 + mag * abs(sin((double)currentstep / (double)step * PI));
				break;
			}
			case 3:																			// Exponential
			{
				double mag = sv2 - sv1;
				double expbase = this->ui.base->value();
				currentsv = sv1 + mag * map(pow(expbase, (double)currentstep / (double)step), 1, expbase, 0, 1);
				break;
			}
			case 4:																			// Logarithmic
			{
				double mag = sv2 - sv1;
				double logbase = this->ui.base->value();
				currentsv = sv1 + mag * logn(logbase, map((double)currentstep / (double)step, 0, 1, 1, logbase));
				break;
			}
		}
		qDebug() << currentsv;
		InheritedTimingPoint newsv(currentoffset, currentsv);
		this->ui.output->append(QString::fromStdString(newsv.to_string()));
	}
}

FlowingSpeedChanges::FlowingSpeedChanges(QWidget *parent)
	: QDialog(parent)
{
	ui.setupUi(this);
	this->ui.time1->setSuffix(QStringLiteral("ms"));
	this->ui.time2->setSuffix(QStringLiteral("ms"));
	this->ui.sv1->setSuffix(QStringLiteral("x"));
	this->ui.sv2->setSuffix(QStringLiteral("x"));
	connect(this->ui.generate, SIGNAL(pressed()), this, SLOT(Generate()));
	connect(this->ui.type, SIGNAL(currentIndexChanged(int)), this, SLOT(ExtraSettings(int)));
	this->ui.label_base->setHidden(true);
	this->ui.base->setHidden(true);
	this->setAttribute(Qt::WA_DeleteOnClose);
}

FlowingSpeedChanges::~FlowingSpeedChanges()
{
}
