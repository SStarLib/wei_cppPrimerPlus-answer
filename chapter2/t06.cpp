#include<iostream>
using namespace std;
double light2astro(double light);
int main() {
	cout<< "Enter the number of light years: ";
	double light;
	cin >> light;
	double astro;
	astro = light2astro(light);
	cout << light
		<< " light years = "
		<< astro
		<< " astronomical units."
		<< endl;
	cin.get();
	cin.get();
	return(0);

}
double light2astro(double light) {
	double astro;
	astro = light * 63240;
	return(astro);
}