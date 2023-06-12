#pragma once
#include <iostream>
#include <fstream>
#include <cmath>
using namespace std;
class CElectricityConsumption {
protected:
	double usedElectricity;
	int time;
	int from;
	int to;
public:
	CElectricityConsumption(int time1, int time2, double electricity);
	CElectricityConsumption();
	void printName() const;
};
