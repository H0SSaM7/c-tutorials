#include <iostream>

int main (){
    int a = 100;
    int b = 50;
    double c = 9.99;
    const double d = 9.99;

    std::cout <<a;

    std::cout <<" ";
    // swiping a to b.
    int temp ;
    temp = a ;
    a = b;
    b = temp;
     std::cout <<a;
    return 0;
}