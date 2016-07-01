#include<iostream>
#include<string>
using namespace std;
int main() {
	//intput;
	string firstName;
	cout << "what is your first name?";
	getline(cin,firstName);
	string lastName;
	cout << "what is you last name?";
	getline(cin,lastName);
	char grade;
	cout <<"what letter grade do you deserve?";
	cin >> grade;
	grade = grade + 1;
	int age;
	cout << "what is your age?";
	cin >> age;


	//output;
	cout << "Name: " << lastName << "," << firstName << endl
		<< "Grade: " << grade << endl
		<< "Age: " << age << endl;

	cin.get();
	cin.get();
	return(0);
}