#include <iostream>


using namespace  std;
int main() {

    int nums[] = {1, 2,4,56,6};
    string names[] = {"hello", "world"};
    cout << names[0] << ' ' <<  names[1];

    int num2d[3][2]  = {{1,2},{3,4},{5,6}};
    for(int i = 0; i < 3; i++){
        for(int j = 0; j < 2; j++){
            cout << num2d[i][j];
        }
        cout << endl;
    }
    return 0;
}