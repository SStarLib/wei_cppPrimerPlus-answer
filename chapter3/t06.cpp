#include<iostream>
using namespace std;
int main() {
	cout << "Enter the miles you have driven:";
	long double miles;
	cin >> miles;

	cout << "Enter gallons of gasoline you have used:";
	long double gas;
	cin >> gas;

	double milesPerGallons = miles / gas;
	cout << endl
		<< milesPerGallons
		<< " miles per gallon your car has gotten."
		<< endl;
	cin.get();
	cin.get();
	return(0);


}