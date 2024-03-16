#include <stdio.h>

int main(void){
    int timeH, speedKmH;    
    float liters;

    scanf("%d", &timeH);
    scanf("%d", &speedKmH);
    
    liters = (timeH*speedKmH)/12.0;

    printf("%.3f\n", liters);
    
    return 0;
}