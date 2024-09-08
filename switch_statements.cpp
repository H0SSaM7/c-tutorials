#include <iostream>

using namespace std;

string getDay(int num){
    switch (num) {
        case 0 :
        return "Satarday";
        case 1:
        return "Sunday";
        case 2: 
        return "Monday";
        case 3:
        return "Tuesday";
        case 4:
        return "Wednesday";
        case 5:
        return "Thursday";
        case 6 :
        return "Friday";
        default:
        return "Days range between 0 - 6";
    }
}
int main (){
    cout << getDay(50);
}