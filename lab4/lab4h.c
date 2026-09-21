#include <stdio.h>

int main()
{
    float cm, m, km;

    printf("Enter length in centimeters: ");
    scanf("%f", &cm);

    m = cm / 100;
    km = cm / 100000;

    printf("Length in meters = %f\n", m);
    printf("Length in kilometers = %f\n", km);

    return 0;
}