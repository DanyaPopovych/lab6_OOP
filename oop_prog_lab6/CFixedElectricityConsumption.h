#pragma once
#include <iostream>
#include "CElectricityConsumption.h"

class CFixedElectricityConsumption : public CElectricityConsumption {
private:
	double priceOfKilowat;
public:
	CFixedElectricityConsumption(int time1, int time2, double electricity);
	double calculatePrice();
	void printName() const;
};

