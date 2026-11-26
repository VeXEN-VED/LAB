#include <stdio.h>

float addition(float a, float b)
{
    return a + b;
}

float subtraction(float a, float b)
{
    return a - b;
}

float multiplication(float a, float b)
{
    return a * b;
}

float division(float a, float b)
{
    return a / b;
}

int main()
{
    float a, b;

    printf("Enter two numbers: ");
    scanf("%f%f", &a, &b);

    printf("\nAddition = %.2f", addition(a, b));
    printf("\nSubtraction = %.2f", subtraction(a, b));
    printf("\nMultiplication = %.2f", multiplication(a, b));

    if(b != 0)
        printf("\nDivision = %.2f\n", division(a, b));
    else
        printf("\nDivision not possible\n");

    return 0;
}
