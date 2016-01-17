#include<iostream>
using namespace std;
int main() {
	cout << "Enter your age and press enter" << endl;
	int age;
	cin >> age;
	cout <<
		"You have "
		<< age * 12
		<< " month old"
		<< endl;
	cin.get();
	cin.get();
	return(0);
}