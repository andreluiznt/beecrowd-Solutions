#include <stdio.h>

int main(void){
    int codeProd1, unitProd1, codeProd2, unitProd2;
    float priceProd1, priceProd2, total;

    scanf("%d %d %f", &codeProd1, &unitProd1, &priceProd1);
    scanf("%d %d %f", &codeProd2, &unitProd2, &priceProd2);

    total = unitProd1*priceProd1 + unitProd2*priceProd2;

    printf("VALOR A PAGAR: R$ %.2f\n", total);

    return 0;
}