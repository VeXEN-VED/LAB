#include <stdio.h>
#include <time.h>

int main()
{
    clock_t start, end;
    double cpu_time;

    start = clock();

    for(long int i = 0; i < 100000000; i++)
    {
    }

    end = clock();

    cpu_time = (double)(end - start) / CLOCKS_PER_SEC;

    printf("Processor time consumed = %.6f seconds\n", cpu_time);

    return 0;
}
