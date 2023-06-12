#include "CElectricityConsumption.h"
#include "CMultiZoneElectricityConsmption.h"
#include "CPrices.h"

	CMultiZoneElectricityConsumption::CMultiZoneElectricityConsumption(int time1, int time2, int electricity) : CElectricityConsumption(time1, time2, electricity) {
		peekPrice = 1.9;
		socialPriceOfKilowat = 1.1;
		normalPriceOfKilowat = 1.68;
	}
	double CMultiZoneElectricityConsumption::calculatePrice(){
		double priceAtAll = 0;
		if (time > 12) {
			time /= 2;
		}
		double averageUsePerHour = usedElectricity / time;
		if (from < to) {
			for (int i = from; i < to; i++) {
				if (i == 24) {
					i = 0;
				}
				else if ((i > 7 && i < 8) || (i > 11 && i < 17)) {
					priceAtAll += averageUsePerHour * normalPriceOfKilowat;
				}
				else if ((i >= 23 && i < 24) || i < 7) {
					priceAtAll += averageUsePerHour * socialPriceOfKilowat;
				}
				else if ((i >= 8 && i < 11) || (i >= 17 && i < 23)) {
					priceAtAll += averageUsePerHour * peekPrice;
				}
				else if (i == 24) {
					i = 0;
				}
			}
		}
		else if(to<from){
			for (int i = to; i < from; i--) {
				if (i == 0) {
					i = 24;
				}
				else if ((i > 7 && i < 8) || (i > 11 && i < 17)) {
					priceAtAll += averageUsePerHour * normalPriceOfKilowat;
				}
				else if ((i >= 23 && i < 24) || i < 7) {
					priceAtAll += averageUsePerHour * socialPriceOfKilowat;
				}
				else if ((i >= 8 && i < 11) || (i >= 17 && i < 23)) {
					priceAtAll += averageUsePerHour * peekPrice;
				}
			}
		}

		
		return priceAtAll;
	}
	void CMultiZoneElectricityConsumption::printName() const {
		cout << "CMultiZoneElectricityConsumption" << endl;
	}
