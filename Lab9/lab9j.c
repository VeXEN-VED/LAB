#include <stdio.h>
#include <time.h>

int main()
{
    time_t now;
    struct tm *current;

    time(&now);

    current = localtime(&now);

    printf("Year   : %d\n", current->tm_year + 1900);
    printf("Month  : %d\n", current->tm_mon + 1);
    printf("Day    : %d\n", current->tm_mday);
    printf("Hour   : %d\n", current->tm_hour);
    printf("Minute : %d\n", current->tm_min);
    printf("Second : %d\n", current->tm_sec);

    return 0;
}
