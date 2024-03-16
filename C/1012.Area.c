#include <stdio.h>
#include <math.h>

int main(void){
    double a, b, c;
    double triangle, circle, trapezium, square, rectangle;
    double pi = 3.14159;

    scanf("%lf %lf %lf", &a, &b, &c);

    triangle = (a*c)/2;
    circle = pi * pow(c, 2);
    trapezium = ((a+b) * c)/2;
    square = pow(b, 2);
    rectangle = a*b;

    printf("TRIANGULO: %.3lf\nCIRCULO: %.3lf\nTRAPEZIO: %.3lf\nQUADRADO: %.3lf\nRETANGULO: %.3lf\n", triangle, circle, trapezium, square, rectangle);

    return 0;
}