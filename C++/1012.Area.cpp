#include <iostream>
#include <math.h>
#include <iomanip>
using namespace std;

int main(void){
    double a, b, c;
    double triangle, circle, trapezium, square, rectangle;
    double pi = 3.14159;

    cin >> a >> b >> c;

    triangle = (a*c)/2;
    circle = pi * pow(c, 2);
    trapezium = ((a+b) * c)/2;
    square = pow(b, 2);
    rectangle = a*b;

    cout << "TRIANGULO: " << fixed << setprecision(3) << triangle << endl << "CIRCULO: " << circle << endl << "TRAPEZIO: " << trapezium << endl << "QUADRADO: " << square << endl << "RETANGULO: " << rectangle << endl;

    return 0;
}