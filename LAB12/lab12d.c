#include <stdio.h>

int main() {
    int a = 10, *p = &a;

    printf("Value: %d\n", a);
    printf("Address: %p\n", &a);
    printf("Pointer: %p\n", p);
    return 0;
}
