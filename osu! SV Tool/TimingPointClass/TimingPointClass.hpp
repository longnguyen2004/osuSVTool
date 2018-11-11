#pragma once
#include <string>


class TimingPoint
{
public:
	unsigned long long offset;
	double intervalue;
	unsigned int meter;
	unsigned int sampleset;
	unsigned int sampleindex;
	unsigned int volume;
	unsigned int inherited;
	unsigned int kiai;
	TimingPoint() {};
	TimingPoint(std::string s);
	std::string to_string();
};

class UninheritedTimingPoint : public TimingPoint
{
public:
	double bpm;
	UninheritedTimingPoint(std::string s);
	UninheritedTimingPoint
	(double offset,
		double bpm,
		int meter = 4,
		int sampleset = 1,
		int sampleindex = 0,
		int volume = 80,
		int kiai = 0);
	std::string to_string();
	double BPMtoMillisPerBeat();
};

class InheritedTimingPoint : public TimingPoint
{
public:
	double multiplier; 
	InheritedTimingPoint(std::string s);
	InheritedTimingPoint
	(double offset,
		double multiplier,
		int meter = 4,
		int sampleset = 1,
		int sampleindex = 0,
		int volume = 80,
		int kiai = 0);
	std::string to_string();
};