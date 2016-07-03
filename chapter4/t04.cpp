#include<iostream>
#include<string>
int main(){
using namespace std;
string firstName;
string lastName;

cout<<"Enter your first name: ";
getline(cin,firstName);
cout<<"Enter your last name: ";
getline(cin,lastName);

string name;

name+=lastName;
name+=",";
name+=firstName;

cout<<"Here's the information in a single string: "<<name
    <<endl;
cin.get();
cin.get();
return 0;
}
