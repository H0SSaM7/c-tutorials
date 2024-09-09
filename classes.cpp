#include <iostream>

using namespace std;


class Car {
    private :
    int wheels;
    public:
    string name;
    string color;
    Car(string aName, int aWheels, string aColor){
        name = aName;
        setwheels(aWheels);
        color = aColor;
    };
    void setwheels(int fWheels){
        wheels = fWheels;
    }
    int getWheels( ){
        return wheels;    
    }
};
class Bus : public Car{
    public:
    

    
};

int main (){
  Car bmw("bmw",4,"Red");
  Bus bus();
  bus().name;
  
  cout << bmw.getWheels();
}