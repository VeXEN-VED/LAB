#include <stdio.h>

int main()
{
    int d, y, w, rd;

    printf("Enter number of days: ");
    scanf("%d", &d);

    y = d / 365;
    d = d % 365;

    w = d / 7;
    rd = d % 7;

    printf("%d years, %d weeks and %d days",
           y, w, rd);

    return 0;
}