#include <stdio.h>
int main()
{
    int a = -450;
    unsigned int b = 34;
    short int c = 342;
    unsigned short int d = 40;
    long int e = 3456;
    char g = 'A';
    float h = 3.23;
    double i = 12.23659;

    printf("%d\n",a);
    printf("%u\n",b);
    printf("%hd\n",c);
    printf("%hu\n",d);
    printf("%ld\n",e);
    printf("%c\n",g);
    printf("%f\n",h);
    printf("%lf\n",i);

    return 0;
}