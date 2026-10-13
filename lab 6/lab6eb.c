
#include <stdio.h>
#include <math.h>

int main()
{
    float a, b, c, d, r1, r2;
    int type;

    printf("a, b and c: ");
    scanf("%f %f %f", &a, &b, &c);

    d = b * b - 4 * a * c;

    if (d > 0)
        type = 1;
    else if (d == 0)
        type = 2;
    else
        type = 3;

    switch (type)
    {
        case 1:
            r1 = (-b + sqrt(d)) / (2 * a);
            r2 = (-b - sqrt(d)) / (2 * a);
            printf("Roots are %f and %f", r1, r2);
            break;

        case 2:
            r1 = -b / (2 * a);
            printf("Equal roots: %f", r1);
            break;

        case 3:
            printf("imaginary");
            break;
    }

    return 0;
}
