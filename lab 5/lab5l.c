#include <stdio.h>

int main()
{
    int age;
    float weight;
    printf("age: ");
    scanf("%d", &age);
    printf("weight(kg): ");
    scanf("%f", &weight);
    if (age >= 18 && age <= 65)
    {
        if (weight >= 50)
            printf("Eligible");
        else
            printf("Not eligible");
    }
    else
    {
        if (age < 18)
            printf("Not eligible");
        else
            printf("Not eligible");
    }
    return 0;
}