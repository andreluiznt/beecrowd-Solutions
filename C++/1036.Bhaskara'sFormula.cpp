#include <iostream>
#include <math.h>
#include <iomanip>
using namespace std;

int main(void){
    double a, b, c;
    double x1, x2, delta;

    cin >> a >> b >> c;

    if(a == 0){
        cout << "Impossivel calcular" << endl;
        return 0;
    }

    delta = (pow(b, 2) - (4*a*c));

    if(delta < 0){
        cout << "Impossivel calcular" << endl;
    }else if(delta == 0){
        x1 = x2 = (-b + sqrt(delta))/(2*a);
        cout << "R1 = " << fixed << setprecision(5) << x1 << endl << "R2 = " << x2 << endl;
    }else if(delta > 0){
        x1 = (-b + sqrt(delta))/(2*a);
        x2 = (-b - sqrt(delta))/(2*a);
        cout << "R1 = " << fixed << setprecision(5) << x1 << endl << "R2 = " << x2 << endl;
    }

    return 0;
}
