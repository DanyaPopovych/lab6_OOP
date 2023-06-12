#pragma once
#include "CElectricityConsumption.h"

class CMultiZoneElectricityConsumption : public CElectricityConsumption {
private:
	double peekPrice;
	double socialPriceOfKilowat;
	double normalPriceOfKilowat;
public:
	CMultiZoneElectricityConsumption(int time1, int time2, int electricity);
	double calculatePrice();
	void printName() const;
};