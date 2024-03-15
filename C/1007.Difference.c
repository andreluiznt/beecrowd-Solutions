#include <stdio.h>

int main(void){
    int a, b, c, d, total;

    scanf("%d", &a);
    scanf("%d", &b);
    scanf("%d", &c);
    scanf("%d", &d);

    total = a*b - c*d;

    printf("DIFERENCA = %d\n", total);

    return 0;
}