#include <iostream>
#include <iomanip>
using namespace std;

int main(void){
    int timeH, speedKmH;    
    float liters;

    cin >> timeH;
    cin >> speedKmH;
    
    liters = (timeH*speedKmH)/12.0;

    cout << fixed << setprecision(3) << liters << endl;
    
    return 0;
}