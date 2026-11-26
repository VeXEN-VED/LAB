#include <stdio.h>

int main() {
    int a = 10, *p = &a;
    *p = 50;

    printf("Updated value: %d\n", a);
    return 0;
}
