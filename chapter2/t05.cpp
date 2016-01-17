#include<iostream>
using namespace std;
void sheshiTohuashi(double *p);
int main() {
	cout << "Enter a sheshi value" << endl;
	double temp;
	cin >> temp;
	cout << temp
		<< " degrees Celsius is ";
	sheshiTohuashi(&temp);
	cout<<temp
		<< " degrees Fahrenheit." << endl;
	cin.get();
	cin.get();
	return(0);
	
}
void sheshiTohuashi(double *p) {
	*p = (*p * 1.8) + 32;

}