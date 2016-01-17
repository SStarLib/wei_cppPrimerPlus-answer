#include<iostream>
using namespace std;
int main() {
	cout << "Enter your height in feet and inches:" << endl;
	cout << "First , enter the feet:";
	int feet;
	cin >> feet;
	cout << "Second , enter the inches: ";
	int inch;
	cin >> inch;
	cout << "Enter your weight in pounds:";
	int pounds;
	cin >> pounds;
	const int inchesPerFoot = 12;
	int inches = feet*inchesPerFoot + inch;
	const float metersPerInch = 0.0254;
	float meters = inches*metersPerInch;
	const float poundsPerKg = 2.2;
	float weight = pounds*poundsPerKg;
	float BMI = weight / sqrt(meters);
	cout << endl
		<< "Your BMI is : "
		<< BMI
		<< endl;
	cin.get();
	cin.get();
	return(0);

}