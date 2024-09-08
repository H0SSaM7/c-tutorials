#include<iostream>

using namespace std;


int main(){
    bool isMale = false;
    bool isTall = true;
    if(isMale && isTall){
        cout << "You are a Tall male";
    } else if (isMale && !isTall) {
        cout << "You are a Shor Male";
     } else if (!isMale && isTall ){
        cout << "You are a Tall Female";
     } else if (!isMale || !isTall){
        cout << "You are short";
     } else {
        cout << "Something else";
     }
    
}