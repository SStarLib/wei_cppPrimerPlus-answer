#include<iostream>
using namespace std;
int main() {
	cout << "Enter the number of seconds:";
	long second;
	cin >> second;
	const int day2hour = 24;
	const int hour2min = 60;
	const int min2sec = 60;
	long min = second / min2sec;
	int sec = second % min2sec;
	long hour = min / hour2min;
	int min_re = min % hour2min;
	int day = hour / day2hour;
	int hour_re = hour % day2hour;
	cout << second
		<< " seconds = "
		<< day
		<< " days , "
		<< hour_re
		<< " hours , "
		<< min_re
		<< " minutes , "
		<< sec
		<< " seconds"
		<< endl;
	cin.get();
	cin.get();
	return(0);


}