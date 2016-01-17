#include<iostream>
using namespace std;
int main() {
	cout << "Enter the world's population: ";
	long long w_popu;
	cin >> w_popu;
	cout << "Enter the population of the US: ";
	long long u_popu;
	cin >> u_popu;
	float perc = long double(u_popu) / long double(w_popu) * 100;
	cout << "The population of the US is "
		<< perc
		<< "%"
		<< " of the world's population"
		<< endl;
	cin.get();
	cin.get();
	return(0);

}