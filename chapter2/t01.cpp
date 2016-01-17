#include<iostream>
using namespace std;
int main(){
cout << "Enter your name and Enter:" << endl;
char name[100];
cin.getline(name,99);
cout << "Enter your address and Enter: " << endl;
char address[200];
cin.getline(address,199);
cout << "Your name is "
<< name
<< ";"
<< "You live in "
<< address
<< "."
<< endl;
cin.get();
cin.get();
return(0);
}