#include<stdio.h>
int main()
{
    int n;
    printf("Enter any no :");
    scanf("%d",&n);

    if (n>=0 && n<=128) {
        printf("ASCII Char is : %c",n);
    }
    else {
        printf("invalid input");
    }
    return 0;
}