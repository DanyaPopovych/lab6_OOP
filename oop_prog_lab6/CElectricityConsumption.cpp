#include "CElectricityConsumption.h"
CElectricityConsumption::CElectricityConsumption(int time1, int time2, double electricity) {
	time = abs(time2 - time1);
	usedElectricity = electricity;
	from = time1;
	to = time2;

}
CElectricityConsumption::CElectricityConsumption() {
	time = 0;
	usedElectricity = 0;
	from = 0;
	to = 0;
}
void CElectricityConsumption::printName() const {
	cout << "CElectricityConsumption" << endl;
}

