#include <stdio.h>

int getNumber()
{
    int n;

    printf("Enter a number: ");
    scanf("%d", &n);

    return n;
}

int main()
{
    int x;

    x = getNumber();

    printf("Number = %d\n", x);

    return 0;
}
