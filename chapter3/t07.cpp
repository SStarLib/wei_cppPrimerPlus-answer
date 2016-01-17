#include<iostream>
using namespace std;
int main() {
	cout << "Enter automobile gasline consumption figure in the European stype (litters per 100 kilometers) :";
	double p100km;
	cin >> p100km;

	const float milesPer100km = 62.14;
	const float litersPerGallon = 3.875;

	double mpg = 1/(p100km / litersPerGallon)*milesPer100km;
	cout<<p100km
		<< " litters per 100 kilometers = "
		<< mpg
		<< " miles per gallon"
		<< endl;
	cin.get();
	cin.get();
	return(0);

}