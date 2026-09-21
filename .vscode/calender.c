#include <stdio.h>
int main()
{

printf(" pls enter DATE (DD MM YYYY)");
int DD, MM, YYYY;
scanf("%d %d %d", &DD, &MM, &YYYY);

if ((MM == 1) || (MM == 3) || (MM == 7) || (MM == 7) || (MM == 8) || (MM == 10) || (MM == 12)) {
    if ((DD == 1 || DD == 21 || DD == 31)) { 
    printf("%dst %d %d",DD ,MM ,YYYY);
}
else if (DD == 2 || DD == 22) {
    printf("%dst %d %d",DD ,MM ,YYYY);
}
else if (DD == 3 || DD ==  23) {
    printf("%dst %d %d",DD ,MM ,YYYY);
}
else if (DD >= 4 && DD <=20){
    printf("%dst %d %d",DD ,MM ,YYYY);
}
else if (DD >= 24 && DD <=31){
    printf("%dst %d %d",DD ,MM ,YYYY);
}



} else if ((MM == 4) || (MM == 6) || (MM == 9) || (MM == 11)){ 
    if ((DD == 1) || (DD == 21)) { 
    printf("%dst %d %d",DD ,MM ,YYYY);
}
else if (DD == 2 || DD == 22) {
    printf("%dst %d %d",DD ,MM ,YYYY);
}
else if (DD == 3 || DD ==  23) {
    printf("%dst %d %d",DD ,MM ,YYYY);
}
else if ( DD == 31) {
    printf("nga");
}
else if (DD >= 4 && DD <=20){
    printf("%dst %d %d",DD ,MM ,YYYY);
}
else if (DD >= 24 && DD <=30){
    printf("%dst %d %d",DD ,MM ,YYYY);
}



} else if (MM == 2) {
    if (DD == 1 || DD == 21) { 
    printf("%dst %d %d",DD ,MM ,YYYY);
}
else if (DD == 2 || DD == 22) {
    printf("%dst %d %d",DD ,MM ,YYYY);
}
else if (DD == 3 || DD ==  23) {
    printf("%dst %d %d",DD ,MM ,YYYY);
}
else if ((DD == 29) && (((YYYY % 4 == 0) && (YYYY % 100 != 0)) || (YYYY % 400 == 0))) {
    printf("%dth %d %d", DD, MM, YYYY);
}
else if (DD == 31 ||  DD == 30) {
   printf("nga");
}
else if (DD >= 4 && DD <=20){
    printf("%dst %d %d",DD ,MM ,YYYY);

}
else if (DD >= 24 && DD <=28){
    printf("%dst %d %d",DD ,MM ,YYYY);

}

} 

//year
if (((YYYY%2 == 0) && (YYYY%100 != 0)) || (YYYY%400 == 0))
{printf(" LEAPYEAR!");}
else {
    printf("isss nottt  ");
}



return 0;
}
