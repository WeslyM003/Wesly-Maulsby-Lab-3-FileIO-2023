#ifndef stats_H
#define stats_H

class stats
{
public:
	//constructor
	stats();
	//destructor
	~stats();

	//public functions
	void standardDeviationCalc();
	void meanCalc();
	void setValue1(float value1_);
	void setValue2(float value2_);
	void setValue3(float value3_);
	void setValue4(float value4_);
	void setMean(float mean_);
	void setStanDev(float stanDev_);
	float getValue1();
	float getValue2();
	float getValue3();
	float getValue4();
	float getMean();
	float getStanDev();

private:
	//private values
	//creates values for inputed values
	int value1;
	int value2;
	int value3;
	int value4;
	// creates the float values of the initial input minus the mean
	float value1M;
	float value2M;
	float value3M;
	float value4M;
	//creates the value for the mean squarded
	float value1Msq;
	float value2Msq;
	float value3Msq;
	float value4Msq;
	// creates the float value of the sum of the values squared
	float allSQ;
	// creates the float value of the allSQ to be divided by 4
	float allSQdiv4;
	// creates the floats to store mean and standard deviation
	float mean;
	float stanDev;
};

#endif // !stats_H