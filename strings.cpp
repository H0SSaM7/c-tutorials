#include <iostream>

using namespace std;

int main () {

   string myName = "Hossam Ramadan";
   

   int length = myName.length();
   string lastName = myName.substr(6);
   int lastNameAt = myName.find("Ramadan",0);
      cout << "My Name: " <<  myName << endl;
      cout << "Last Name: " <<  lastName << endl;
      cout << "My Last Name at: " <<  lastNameAt << endl;
      cout << "My Name Length: " <<  length << endl;
   

    return 0;
}