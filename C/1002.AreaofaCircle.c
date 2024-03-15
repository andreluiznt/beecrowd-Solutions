#include <stdio.h>
#include <math.h>

int main(void){
    double area, r, pi = 3.14159;

    scanf("%lf", &r);

    area = pi * pow(r, 2);

    printf("A=%.4lf\n", area);

    return 0;
}