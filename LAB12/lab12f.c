#include <stdio.h>

int main() {
    int a = 10, b = 20;
    int *p1 = &a, *p2 = &b;

    printf("a: %d, Address: %p\n", *p1, p1);
    printf("b: %d, Address: %p\n", *p2, p2);
    return 0;
}
