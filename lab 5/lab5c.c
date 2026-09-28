#include <stdio.h>

int main()
{
    int n;
    printf("no: ");
    scanf("%d", &n);
    printf("last bit %d\n", n & 1);
    printf("second last bit %d\n", (n >> 1) & 1);
    printf("third last bit %d\n", (n >> 2) & 1);
    return 0;
}