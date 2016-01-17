#include<iostream>
using namespace std;
int main(){
	cout << "Enter the distance (in long )and press enter" << endl;
	double furlong;
	cin >> furlong;
	cout << "The distance is "
		<< furlong
		<< " longs"
		<< ", that is "
		<< furlong * 220
		<< " yards"
		<< endl;
	cin.get();
	cin.get();
	return(0);
}