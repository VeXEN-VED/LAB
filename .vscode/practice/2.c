#include<stdio.h>
int main()
{
int DD, MM, YYYY;
    printf(" enter ( DD MM YYYY) ");
    scanf("%d %d %d", &DD, &MM, &YYYY);


    //DATE
if (DD == 1 || DD == 21) { 
    printf("%dst ",DD);
}
else if (DD == 31 && MM%2 == 0) {
    printf("%dst ");
}
else if (DD == 31 && MM%2 == 1) {
   printf("nga");
}
else if (DD == 2 || DD == 22) {
    printf("%dnd ",DD);
}
else if (DD == 3 || DD ==  23) {
    printf("%drd ",DD);
}
else {
    printf("%dth ",DD);
}
//MONTH
switch(MM){
    case 1: printf(" January"); break;
    case 2: printf(" February"); break;
    case 3: printf(" March"); break;
    case 4: printf(" April"); break;
    case 5: printf(" May"); break;
    case 6: printf(" June"); break;
    case 7: printf(" July"); break;
    case 8: printf(" August"); break;
    case 9: printf(" September"); break;
    case 10: printf(" October"); break;
    case 11: printf(" November"); break;
    case 12: printf(" December") ; break;
}
// year 
printf(" %d",YYYY);
return 0;
}
