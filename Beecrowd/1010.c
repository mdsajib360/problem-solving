#include<stdio.h>
int main() {
    int serial1, unit1, serial2, unit2;
    double price1, price2, paidTo;

    scanf("%d %d %lf", &serial1, &unit1, &price1);

    scanf("%d %d %lf", &serial2, &unit2, &price2);

    price1 *= unit1;

    price2 *= unit2;

    paidTo = price1 + price2;

    printf("VALOR A PAGAR: R$ %.2lf\n", paidTo);

    return 0;
}