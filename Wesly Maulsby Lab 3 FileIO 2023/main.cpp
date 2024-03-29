/***************************
Wesly Maulsby
C++ Fall 2023
Lab 3
User and File Input/Output
Learn the basics of Input and Output with user input and file input
and practice classes
*****************************/

//include necessary libraries
#include <iostream>
#include <string>
#include <fstream>
#include "stats.h"

using namespace std;

int main()
{
	float data;

	//creates stats object c for the user inputed values
	stats c;
	//creates stats object file for the file inputed values
	stats file;

	//user inputs values
	cout << "Enter Value 1: ";
	cin >> data;
	c.setValue1(data);

	cout << "Enter Value 2: ";
	cin >> data;
	c.setValue2(data);

	cout << "Enter Value 3: ";
	cin >> data;
	c.setValue3(data);
	
	cout << "Enter Value 4: ";
	cin >> data;
	c.setValue4(data);

	//calculates values for mean
	c.meanCalc();
	cout << "Mean: " << c.getMean() << endl;

	//calculates values for standard deviation
	c.standardDeviationCalc();
	cout << "Standard Deviation: " << c.getStanDev() << endl;

	//file input and output
	ifstream inFile;
	inFile.open("inMeanStd2023.dat");

	//reads in values line by line
	inFile >> data;
	file.setValue1(data);

	inFile >> data;
	file.setValue2(data);

	inFile >> data;
	file.setValue3(data);

	inFile >> data;
	file.setValue4(data);

	file.meanCalc();
	file.standardDeviationCalc();

	//outputs files to specified file
	ofstream outFile;
	outFile.open("OutMeanStd2023.dat");
	outFile << "Mean: " << file.getMean() << "\n" << "Standard Deviation: " << file.getStanDev();
	
	return 0;
}