#include <stdio.h>

int main(void){
    double a, b, c, av;

    scanf("%lf", &a);
    scanf("%lf", &b);
    scanf("%lf", &c);

    av = (a*2.0 + b*3.0 + c*5.0)/10.0;

    printf("MEDIA = %.1lf\n", av);

    return 0;
}