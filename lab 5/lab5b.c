#include <stdio.h>

int main()
{
    int y;
    printf("year: ");
    scanf("%d", &y);

    if ((y % 400 == 0) || ((y % 4 == 0) && (y % 100 != 0)))
        printf("Leap Year");
    else
        printf("it's simple year");

    return 0;
}