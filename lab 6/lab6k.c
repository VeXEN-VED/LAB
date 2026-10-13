#include <stdio.h>
int main()
{
    int a1,a2,b1,b2;
    printf("enter time 1 (hr min)");
    scanf("%d %d",&a1,&a2);

    printf("enter time 2 (hr min)");
    scanf("%d %d",&b1,&b2);

    if (a1>=b1 && a2>b2){
        printf("%d : %d > %d : %d ",a1,a2,b1,b2);
    }
    else {
        printf("%d : %d > %d : %d ",b1,b2,a1,a2);
    }
    



}
