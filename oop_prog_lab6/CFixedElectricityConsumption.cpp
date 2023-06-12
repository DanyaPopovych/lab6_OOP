#include "CFixedElectricityConsumption.h"
#include "CElectricityConsumption.h"



	CFixedElectricityConsumption::CFixedElectricityConsumption(int time1,  int time2, double electricity) : CElectricityConsumption(time1, time2, electricity) {
		priceOfKilowat = 1.68;
	}
	double CFixedElectricityConsumption::calculatePrice() {
		double priceAtAll;
		priceAtAll = (priceOfKilowat * usedElectricity);
		return priceAtAll;
	}
	void CFixedElectricityConsumption::printName() const {
		cout << "CFixedElectricityConsumption" << endl;
	}
	
	

