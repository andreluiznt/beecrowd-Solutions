#include <stdio.h>
#include <math.h>

int main(void){
    float a, b, c;
    float x1, x2, delta;

    scanf("%f %f %f", &a, &b, &c);

    if(a == 0){
        printf("Impossivel calcular\n");
        return 0;
    }

    delta = (pow(b, 2) - (4*a*c));

    if(delta < 0){
        printf("Impossivel calcular\n");
    }else if(delta == 0){
        x1 = x2 = (-b + sqrt(delta))/(2*a);
        printf("R1 = %.5f\nR2 = %.5f\n", x1, x2);
    }else if(delta > 0){
        x1 = (-b + sqrt(delta))/(2*a);
        x2 = (-b - sqrt(delta))/(2*a);
            printf("R1 = %.5f\nR2 = %.5f\n", x1, x2);
    }

    return 0;
}
