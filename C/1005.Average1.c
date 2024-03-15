#include <stdio.h>

int main(void){
    double a, b, av;

    scanf("%lf", &a);
    scanf("%lf", &b);

    av = (a*3.5 + b*7.5)/11.0;

    printf("MEDIA = %.5lf\n", av);
    
    return 0;
}