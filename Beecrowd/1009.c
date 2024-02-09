#include <stdio.h>
int main()
{
    // commission = 15%, or 15/100
    char name[50];
    double salary, TOTAL;
    scanf("%s", &name);
    scanf("%lf %lf", &salary, &TOTAL);
    TOTAL = salary +  (TOTAL * 15/100);
    printf("TOTAL = R$ %.2lf \n", TOTAL);
   
    return 0;
}

