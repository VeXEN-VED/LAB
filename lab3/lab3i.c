#include <stdio.h>

int main()
{
    int age;

    printf("Enter your age: ");
    scanf("%d", &age);

    if (age >= 18){
        printf("Eligible to cast vote\n");
    }
    else{
        printf("Not eligible to cast vote\n");
    }

    return 0;
}