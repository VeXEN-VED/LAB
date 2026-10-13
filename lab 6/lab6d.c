#include <stdio.h>
int main()
{
   int a , b;
   char n;
   printf("enter any two number:");
   scanf("%d %d", &a, &b);
   printf("enter arthemic operator");
   scanf("%c",&n);
   
   if (n == 1){
    printf("%d + %d =%d",a,b,(a+b));
   }
   else if (n == 2){
    printf("%d - %d =%d",a,b,(a-b));
   }
   else if (n == 3){
    printf("%d * %d =%d",a,b,(a*b));
   }
   else if (n == 4){
    printf("%d / %d =%d",a,b,(a/b));
   }
   return 0;
}