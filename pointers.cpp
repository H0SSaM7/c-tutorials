#include <iostream>

using namespace std;


/*
What is pointers ?
well it's a type of information like double  or int, you can store it and use it;
It's just a memmory address of data type that is stored in the momery
*/

int main (){
    int age  = 15;
    int *pAge =  &age;
    double gpa = 2.5;
    double *pGpa = &gpa; 
    string name = "Hossam";
    string *pName = &name;

    cout << age <<  " " << pAge << endl;
    cout << age << " " << &age << endl;
    cout << age << " " << *&age << endl;


}