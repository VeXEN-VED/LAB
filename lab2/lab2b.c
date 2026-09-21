#include<stdio.h>
int main()
{ 
    float avg;
    float a, b;
    printf("enter any two numbers a and b : ");
    scanf("%f %f", &a, &b);
    avg=(a+b)/2;
    printf("average of both numbers is : %f", avg);
    return 0;
}
