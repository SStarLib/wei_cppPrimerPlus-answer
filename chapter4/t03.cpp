#include<iostream>
#include<cstring>
int main(){
using namespace std;
const int Size=20;
char firName[Size];
char lasName[Size];

cout<<"Enter your first name: ";
cin.getline(firName,size-1);
cout<<"Enter your last name: ";
cin.getline(lasName,size-1);

char name[size*2+2];
strcpy(name,lasName);
strcat(name,",");
strcat(name,firName);

cout<<"Here's the information in a single string: "
    << name <<endl;
return 0;
}
