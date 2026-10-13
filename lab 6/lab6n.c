
#include <stdio.h>

int main()
{
    int n, o, digit, r = 0;

    printf("Enter an integer: ");
    scanf("%d", &n);

    o = n;

    if (n<0)
    {
        printf("Not a palindrome");
        return 0;
    }

    for (;n>0;n=n/10)
    {
        d =n%10;
        r = r*10 + d;
    }

    if (o == r)
        printf("Palindrome");
    else
        printf("Not a palindrome");

    return 0;
}
