#include <iostream>

using namespace std;

void sayMyName(string name){
    cout << "Your name is " << name << endl;


}

double cupe(int num) {
    return num * num * num;
}
int main (){
    sayMyName("hossam");
    sayMyName("Ahmed");
    cout << cupe(5);
    return 0;
}