#include "CElectricityConsumption.h"
#include "CFixedElectricityConsumption.h"
#include "CSocialElectricityConsumption.h"
#include "CMultiZoneElectricityConsmption.h"
#include "CPrices.h"
using namespace std;



int main() {
	CFixedElectricityConsumption a(1, 5, 5.0);
	CSocialElectricityConsumption b(1, 5, 5.0);
	CMultiZoneElectricityConsumption c(23, 5, 5.0);
	a.printName();
	cout << a.calculatePrice() << endl;
	b.printName();
	cout << b.calculatePrice() << endl;
	c.printName();
	cout << c.calculatePrice() << endl;
	std::ofstream outfile;
	outfile.open("output.txt"); 
	if (outfile.is_open()) {
		outfile << a.calculatePrice() << endl; 
		outfile << b.calculatePrice() << endl;
		outfile << c.calculatePrice() << endl;
		outfile.close(); 
	}
	return 0;
}
