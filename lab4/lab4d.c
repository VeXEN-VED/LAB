    #include <stdio.h>

int main()
{
    int n, d1, d2, d3, reverse;

    printf("Enter a 3 digit number: ");
    scanf("%d", &n);

    d1 = n / 100;
    d2 = (n / 10) % 10;
    d3 = n % 10;

    reverse = d3 * 100 + d2 * 10 + d1;

    printf("Reverse = %d", reverse);

    return 0;
}