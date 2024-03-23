#include <iostream>
#include <math.h>
#include <iomanip>
using namespace std;

int main(void){
    double area, r, pi = 3.14159;

    cin >> r;

    area = pi * pow(r, 2);

    cout << "A=" << fixed << setprecision(4) << area << endl;

    return 0;
}