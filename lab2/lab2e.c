#include <stdio.h>
int main()
{
    int l,b,p;
    printf("Enter the length and the breadth of the rectangle :");
    scanf("%d %d", &l, &b);

    p=2*(l+b);
    printf("Perimeter is : %d",p);
    return 0;
}