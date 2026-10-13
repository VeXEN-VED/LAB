#include <stdio.h>
int main()
{
    int d,m,y;
    printf("enter data in ( DD MM YY) fornat");
    scanf("%d %d %d", &d,&m,&y);
    
    
switch(d){
        case 4: case 5: case 6: case 7: case 8: case 9: case 10:
        case 11: case 12: case 13: case 14: case 15: case 16: case 17: case 18: case 19: case 20:
        case 24: case 25: case 26: case 27: case 28: case 29: case 30:
        printf("%dth ",d);
        break;
        break;

        case 1: case 21: case 31:
        printf("%dnd ",d);
        break;
        
        case 3: case 23:
        printf("%drd ",d);
        break;
    }
 switch(m){
        case 1:
        printf("JAN");
        break;

        case 2:
        printf("FEB");
        break;

        case 3:
        printf("MARCH");
        break;

        case 4:
        printf("APRIL");
        break;

        case 5:
        printf("MAY");
        break;

        case 6:
        printf("JUNE");
        break;

        case 7:
        printf("JULY");
        break;

        case 8:
        printf("AUG");
        break;

        case 9:
        printf("SEPT");
        break;

        case 10:
        printf("OCT");
        break;

        case 11:
        printf("NOV");
        break;

        case 12:
        printf("DEC");
        break;

    }

printf(" %d",y);
return 0;
}