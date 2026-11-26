#include <stdio.h>

int isPrime(int n)
{
    int i;

    for(i = 2; i <= n / 2; i++)
    {
        if(n % i == 0)
            return 0;
    }

    return 1;
}

int main()
{
    int n;

    printf("Enter a number: ");
    scanf("%d", &n);

    if(n <= 1)
        printf("Not Prime\n");
    else if(isPrime(n))
        printf("Prime\n");
    else
        printf("Not Prime\n");

    return 0;
}
