#include <stdio.h>

int main()
{
    float l, w, a;

    printf("Enter length: ");
    scanf("%f", &l);

    printf("Enter width: ");
    scanf("%f", &w);

    a = l * w;

    printf("Area of rectangle = %f", a);

    return 0;
}