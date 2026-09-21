#include<stdio.h>
#include<math.h>
int main()
{
printf("enter no of digiits in your number (MAX 10)");
int a;
scanf("%d",&a);

int d1=0, d2=0 ,d3 = 0, d4 = 0, d5 = 0, d6 = 0, d7 = 0, d8 = 0, d9 = 0, d10 = 0;
switch(a) {
    case 1:
    scanf("%d",&d1);
    break;
    case 2:
    scanf("%d %d",&d1, &d2);
    break;
    case 3:
    scanf("%d %d %d",&d1, &d2 ,&d3);
    break;
    case 4:
    scanf("%d %d %d %d ",&d1, &d2, &d3, &d4);
    break;
    case 5:
    scanf("%d %d %d %d %d",&d1, &d2 ,&d3 ,&d4 ,&d5);
    break;
    case 6:
    scanf("%d %d %d %d %d %d",&d1, &d2, &d3, &d4, &d5, &d6);
    break;
    case 7:
    scanf("%d %d %d %d %d %d %d",&d1, &d2 ,&d3 ,&d4 ,&d5 , &d6, &d7);
    break;
    case 8:
    scanf("%d %d %d %d %d %d %d %d",&d1, &d2, &d3, &d4, &d5, &d6, &d7, &d8);
    break;
    case 9:
    scanf("%d %d %d %d %d %d %d %d %d",&d1, &d2, &d3, &d4, &d5, &d6, &d7, &d8, &d9);
    break;
    case 10:
    scanf("%d %d %d %d %d %d %d %d %d %d",&d1, &d2, &d3, &d4, &d5, &d6, &d7, &d8, &d9, &d10);
    break;
}   

int sum;
sum = pow(d1,a) + pow(d2,a) + pow(d3,a) + pow(d4,a) + pow(d5,a) + pow(d6,a) + pow(d7,a) + pow(d8,a) + pow(d9,a) + pow(d10,a);

int num=0;
switch(a) {
    case 1:
    num=num*10+ d1;
    break;
    case 2:
    num=num*10+ d1;
    num=num*10+ d2;
    break;
    case 3:
    num=num*10+ d1;
    num=num*10+ d2;
    num=num*10+ d3;
    break;
    case 4:
    num=num*10+ d1;
    num=num*10+ d2;
    num=num*10+ d3;
    num=num*10+ d4;
    break;
    case 5:
    num=num*10+ d1;
    num=num*10+ d2;
    num=num*10+ d3;
    num=num*10+ d4;
    num=num*10+ d5;
    break;
    case 6:
    num=num*10+ d1;
    num=num*10+ d2;
    num=num*10+ d3;
    num=num*10+ d4;
    num=num*10+ d5;
    num=num*10+ d6;
    break;
    case 7:
    num=num*10+ d1;
    num=num*10+ d2;
    num=num*10+ d3;
    num=num*10+ d4;
    num=num*10+ d5;
    num=num*10+ d6;
    num=num*10+ d7;
    break;
    case 8:
    num=num*10+ d1;
    num=num*10+ d2;
    num=num*10+ d3;
    num=num*10+ d4;
    num=num*10+ d5;
    num=num*10+ d6;
    num=num*10+ d7;
    num=num*10+ d8;
    case 9:
    num=num*10+ d1;
    num=num*10+ d2;
    num=num*10+ d3;
    num=num*10+ d4;
    num=num*10+ d5;
    num=num*10+ d6;
    num=num*10+ d7;
    num=num*10+ d8;
    num=num*10+ d9;
    break;
    case 10:
    num=num*10+ d1;
    num=num*10+ d2;
    num=num*10+ d3;
    num=num*10+ d4;
    num=num*10+ d5;
    num=num*10+ d6;
    num=num*10+ d7;
    num=num*10+ d8;
    num=num*10+ d9;
    num=num*10+ d10;
    break;
}



if (sum == num) {
    printf(" the no is armstrong no ");
}
else {
    printf(" it's not armstrong no");
}
return 0;

}