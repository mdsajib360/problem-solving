#include <stdio.h>
int main()
{
    // amount received in hour
    int number, hour;
    float amount, SALARY;
    scanf("%d %d %f", &number, &hour, &amount);
    SALARY = hour * amount;

    printf("NUMBER = %d\n", number);
    printf("SALARY = U$ %.2f\n", SALARY);
    return 0;
}