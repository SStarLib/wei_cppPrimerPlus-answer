#include<iostream>
using namespace std;
int main() {
	cout << "Enter a latitude in degrees ,minutes and seconds: " << endl;
	cout << "First ,enter the degrees: ";
	int degrees;
	cin >> degrees;
	cout << "Next , enter the minutes of the arc: ";
	int minutes;
	cin >> minutes;
	cout << "Finally , enter the seconds of the arc: ";
	int seconds;
	cin >> seconds;
	const int minPerDeg = 60;
	const int secPerMin = 60;
	float min_f = float(degrees) / secPerMin + minutes;
	float latitude = min_f / minPerDeg + degrees;
	cout <<
		degrees
		<< "degrees, "
		<< minutes
		<< "minutes, "
		<< seconds
		<< "seconds = "
		<< latitude
		<< " degrees"
		<< endl;
	cin.get();
	cin.get();
	return(0);
	
	
}
