#include <iostream>

using namespace std;
int main (){
         int age;
         string name;
     int currentYear;
    cout << "Enter your full name? " << endl;
    getline(cin,name);
    cout << "Enter the year you born in? " << endl;
    cin >> age;
    cout << "Enter the current year? ";
    cin >> currentYear;

     cout << "Hello " << name  << " Your age is " << currentYear - age ;
}