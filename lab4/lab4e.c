#include <stdio.h>

int main()
{
    int m, p, c, total;

    printf("Enter marks in Maths, Physics and Chemistry: ");
    scanf("%d %d %d", &m, &p, &c);

    total = m + p + c;

    if ((m >= 65 && p >= 55 && c >= 50 && total >= 190) || (maths + physics >= 140)){
        printf("Eligible");
    }
    else{
        printf("Not eligible");
    }

    return 0;
}