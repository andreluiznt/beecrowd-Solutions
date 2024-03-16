#include <stdio.h>

int main(void){
    int distance;
    float spentft, total;

    scanf("%d", &distance);
    scanf("%f", &spentft);

    total = distance/spentft;

    printf("%.3f km/l\n", total);

    return 0;
}