#include "stdafx.h"
#include "TimingPointClass.hpp"
#include <regex>
#include <sstream>
#include <iomanip>
#include <iostream>

static const std::regex parser("(\\d+),(-?\\d+\\.\\d+),(\\d+),(\\d+),(\\d+),(\\d{1,3}),([01]),([01])");

TimingPoint::TimingPoint(std::string s)
{
	std::smatch data;
	std::regex_match(s, data, parser);
	this->offset = std::stoi(data.str(1));
	this->intervalue = std::stold(data.str(2));
	this->meter = std::stoi(data.str(3));
	this->sampleset = std::stoi(data.str(4));
	this->sampleindex = std::stoi(data.str(5));
	this->volume = std::stoi(data.str(6));
	this->inherited = std::stoi(data.str(7));
	this->kiai = std::stoi(data.str(8));
}

std::string TimingPoint::to_string()
{
	std::ostringstream output("", std::ostringstream::ate);
	output << std::fixed;
	output << std::setprecision(2) << offset << ',';
	output << std::setprecision(12) << intervalue << ',';
	output << meter << ',';
	output << sampleset << ',';
	output << sampleindex << ',';
	output << volume << ',';
	output << inherited << ',';
	output << kiai;
	return output.str();
}

UninheritedTimingPoint::UninheritedTimingPoint(std::string s) : TimingPoint(s)
{
	this->bpm = 60000.00 / intervalue;
}
UninheritedTimingPoint::UninheritedTimingPoint
	(double offset,
		double bpm,
		int meter,
		int sampleset,
		int sampleindex,
		int volume,
		int kiai)
{
	this->offset = offset;
	this->bpm = bpm;
	this->meter = meter;
	this->sampleset = sampleset;
	this->sampleindex = sampleindex;
	this->volume = volume;
	this->kiai = kiai;
	this->inherited = 1;
}
double UninheritedTimingPoint::BPMtoMillisPerBeat()
{
	return 60000.00 / bpm;
}
std::string UninheritedTimingPoint::to_string()
{
	this->intervalue = BPMtoMillisPerBeat();
	return TimingPoint::to_string();
}

InheritedTimingPoint::InheritedTimingPoint(std::string s) : TimingPoint(s)
{
	this->multiplier = -100.00 / intervalue;
}

InheritedTimingPoint::InheritedTimingPoint
	(double offset,
	double multiplier,
		int meter,
		int sampleset,
		int sampleindex,
		int volume,
		int kiai)
{
	this->offset = offset;
	this->multiplier = multiplier;
	this->meter = meter;
	this->sampleset = sampleset;
	this->sampleindex = sampleindex;
	this->volume = volume;
	this->kiai = kiai;
	this->inherited = 0;
}
std::string InheritedTimingPoint::to_string()
{
	this->intervalue = -100.00 / multiplier;
	return TimingPoint::to_string();
}