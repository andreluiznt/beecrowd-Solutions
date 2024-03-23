#include <iostream>
#include <math.h>
#include <iomanip>
using namespace std;

int main(void){
    double r, pi = 3.14159, volume;

    cin >> r;

    volume = (4/3.0) * pi * pow(r, 3);

    cout << "VOLUME = " << fixed << setprecision(3) << volume << endl;

    return 0;
}