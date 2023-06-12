
#include "CElectricityConsumption.h"
#include "CSocialElectricityConsumption.h"


	CSocialElectricityConsumption::CSocialElectricityConsumption(double time1, double time2, double electricity) : CElectricityConsumption(time1, time2, electricity) {
		normalPriceOfKilowat = 1.68;
		socialPriceOfKilowat = 1.10;
		limitOfKilowat = 100;
	}
	double CSocialElectricityConsumption::calculatePrice(){
		double priceAtAll;
		if (usedElectricity >= limitOfKilowat) {
			priceAtAll = (normalPriceOfKilowat * usedElectricity);
		}
		else {
			priceAtAll = (socialPriceOfKilowat * usedElectricity);
		}
		return priceAtAll;
	}
	void CSocialElectricityConsumption::printName() const {
		cout << "CSocialElectricityConsumption" << endl;
	}

