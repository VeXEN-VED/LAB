#include<stdio.h>
int main()
{ 
    int area, l, b;
    printf("enter the length (l) and breadth (b) of the rectangle : ");
    scanf("%d %d", &l, &b);
    
    area= l*b;
    printf("area of rectangle is : %d", area);


    return 0;
}