#include <stdio.h>
#include <time.h>

int main()
{
    long int t1, t2;
    double difference;

    printf("Enter first time in seconds: ");
    scanf("%ld", &t1);

    printf("Enter second time in seconds: ");
    scanf("%ld", &t2);

    difference = difftime((time_t)t2, (time_t)t1);

    printf("Difference = %.2f seconds\n", difference);

    return 0;
}
