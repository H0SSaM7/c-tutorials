#include <iostream>


int main(){
    int x = 3;
    int y = 2;
  
    int p  = x + y ;// output = 5
    int s = x - y; // output = 1
    int m  = x * y; // output = 5
    int d =  y / x; // output will be int = 0 , to get a dobule output we must declare x or y as a double and output will b 0.666. 
    int r = x % y;
    x   = x +1  ; // output = 4
    x  ++ ; // output = 5
    int z = x ++ ; // output z  = 5 , x = 6 ;
    int z  = ++x ; // output z = 7 , x = 7
    
    std :: cout << x;
    return 0;


}