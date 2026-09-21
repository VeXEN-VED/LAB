#include <stdio.h>

int main()
{
    int a, b, c, d, e, f, g, h, i, j, k, l, m, n;

    a = sizeof(+111);
    b = sizeof(-222);
    c = sizeof(4056665431U);
    d = sizeof(-40566654313421L);

    e = sizeof(0.);
    f = sizeof(.0);
    g = sizeof(12.0);
    h = sizeof(1.234);

    i = sizeof(-1.2f);
    j = sizeof(1.23456789L);
    k = sizeof(123456e+4);
    l = sizeof(123456E-5f);

    printf("%zu\n", a);
    printf("%zu\n", b);
    printf("%zu\n", c);
    printf("%zu\n", d);
    printf("%zu\n", e);
    printf("%zu\n", f);
    printf("%zu\n", g);
    printf("%zu\n", h);
    printf("%zu\n", i);
    printf("%zu\n", j);
    printf("%zu\n", k);
    printf("%zu\n", l);

    return 0;
}