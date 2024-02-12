#include <stdio.h>
#include <math.h>
int main()
{
    double volume, R;
    double PI = 3.14159;
    scanf("%lf", &R);

    volume = (4.f /3.f) * PI * R * R * R;
    printf("VOLUME = %.3lf\n", volume);

    return 0;
}