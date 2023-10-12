#include "stats.h"
#include <iostream>

//constructor
stats::stats()
{
}

//destructor
stats::~stats()
{
}


//set and get functions for values
void stats::setValue1(float value1_)
{
	value1 = value1_;
}

float stats::getValue1()
{
	return value1;
}

void stats::setValue2(float value2_)
{
	value2 = value2_;
}

float stats::getValue2()
{
	return value2;
}

void stats::setValue3(float value3_)
{
	value3 = value3_;
}

float stats::getValue3()
{
	return value3;
}

void stats::setValue4(float value4_)
{
	value4 = value4_;
}

float stats::getValue4()
{
	return value4;
}

//get and set for mean
void stats::setMean(float mean_)
{
	mean = mean_;
}

float stats::getMean()
{
	return mean;
}

//mean calculations
void stats::meanCalc()
{
	mean = (value1 + value2 + value3 + value4) / 4.0;
}

//get and set for standard deviation
void stats::setStanDev(float stanDev_)
{
	stanDev = stanDev_;
}

float stats::getStanDev()
{
	return stanDev;
}

//standard deviation calculations
void stats::standardDeviationCalc()
{
	value1M = value1 - mean;
	value2M = value2 - mean;
	value3M = value3 - mean;
	value4M = value4 - mean;

	value1Msq = value1M * value1M;
	value2Msq = value2M * value2M;
	value3Msq = value3M * value3M;
	value4Msq = value4M * value4M;

	allSQ = value1Msq + value2Msq + value3Msq + value4Msq;

	allSQdiv4 = allSQ / 4;

	stanDev = sqrt(allSQdiv4);
}