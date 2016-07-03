#include<iostream>
#include<string>
 using namespace std;
 struct CandyBar{
     string brand;
     double weight;
     int number;
 };
 int main(){
     CandyBar snack = {
        "Mocha Munch",
        2.3,
        350
     };

     cout<<"Brand: "<<snack.brand<<endl
         <<"Weight: "<<snack.weight<<endl
         <<"Number: "<<snack.number<<endl;

     cin.get();
     cin.get();

     return 0;
 }
