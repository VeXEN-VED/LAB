#include<stdio.h>
int main()
{
    printf("Integer : %zu\n", sizeof(int));
    printf("Unsigned Integer : %zu\n", sizeof(unsigned int));
    printf("Short Integer : %zu\n", sizeof(short int));
    printf("Unsigned Short Integer : %zu\n", sizeof(unsigned short int));
    printf("Long Integer : %zu\n", sizeof(long int));
    printf("Unsigned Long Integer : %zu\n", sizeof(unsigned long int));
    printf("Character : %zu\n", sizeof(char));
    printf("Float : %zu\n", sizeof(float));
    printf("Double : %zu\n", sizeof(double));
    printf("Long Double : %zu\n", sizeof(long double));

    return 0;
}