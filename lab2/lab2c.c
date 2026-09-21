#include<stdio.h>
int main()
{ 
    int r, a, b;
    printf("enter any two numbers a and b ie (a/b) : ");
    scanf("%d %d", &a, &b);
    
    r= a%b;
    printf("reminder is : %d", r);


    return 0;
}