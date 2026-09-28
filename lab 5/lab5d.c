#include <stdio.h>

int main()
{
    int n;
    printf("no: ");
    scanf("%d", &n);
    if (!n)
        printf("no=0");
    else
        printf("no!=0");

    return 0;
}