#include <stdio.h>
int main()
{
    int n;
    printf("enter week no ( 1 to 7 )");
    scanf("%d",&n);

    switch(n){
        case 1:
        printf("Sunday");
        break;
        case 2:
        printf("Monday");
        break;
        case 3:
        printf("Tuesday");
        break;
        case 4:
        printf("Wednesday");
        break;
        case 5:
        printf("Thrusday");
        break;
        case 6:
        printf("Friday");
        break;
        case 7:
        printf("saturday");
        break;
    }
    return 0;
}