#include <stdio.h>
#include <time.h>

int main()
{
    time_t seconds;

    seconds = time(NULL);

    printf("Current calendar time in seconds = %d\n", seconds);

    return 0;
}