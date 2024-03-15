#include <stdio.h>

int main(void){
    int numbEmployed, numbHoursPm;
    double salaryPh, salaryPm;

    scanf("%d", &numbEmployed);
    scanf("%d", &numbHoursPm);
    scanf("%lf", &salaryPh);

    salaryPm = numbHoursPm * salaryPh;

    printf("NUMBER = %d\n", numbEmployed);
    printf("SALARY = U$ %.2lf\n", salaryPm);

    return 0;
}