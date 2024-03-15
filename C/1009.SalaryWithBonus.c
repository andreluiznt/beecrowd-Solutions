#include <stdio.h>

int main(void){
    char nome[20];
    double salary, sale, salaryBonus;

    scanf("%s", nome);
    scanf("%lf", &salary);
    scanf("%lf", &sale);

    salaryBonus = salary + (sale*0.15);

    printf("TOTAL = R$ %.2lf\n", salaryBonus);

    return 0;
}