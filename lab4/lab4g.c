#include <stdio.h>

int main()
{
    float r, d, c, a;
    float pi = 3.1415;

    printf("Enter radius: ");
    scanf("%f", &r);

    d = 2 * r;
    c = 2 * pi * r;
    a = pi * r * r;

    printf("Diameter = %f\n", d);
    printf("Circumference = %f\n", c);
    printf("Area = %.2f", a);

    return 0;
}