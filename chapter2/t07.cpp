#include<iostream>
using namespace std;
void displaytime(int hour,int minute);
int main() {
	cout << "enter the number hours: ";
	int hour;
	cin >> hour;
	cout << "enter the number minutes";
	int minute;
	cin >> minute;
	displaytime(hour, minute);
	cin.get();
	cin.get();
	return(0);
}
void displaytime(int hour, int minute) {
	cout << "Time: " << hour << ":" << minute << endl;
}