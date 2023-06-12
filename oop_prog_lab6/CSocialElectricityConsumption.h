#pragma once
#include "CElectricityConsumption.h"

class CSocialElectricityConsumption : public CElectricityConsumption {
private:
	double normalPriceOfKilowat;
	double socialPriceOfKilowat;
	double limitOfKilowat;
public:
	CSocialElectricityConsumption(double time1, double time2, double electricity);
		double calculatePrice();
	void printName() const;

};