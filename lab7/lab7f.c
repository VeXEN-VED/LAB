/* Lab 7(f): Reverse a given integer */
#include <stdio.h>

int main(void) {
    int n, digit, reverse = 0;

    printf("Enter an integer: ");
    scanf("%d", &n);

    while (n != 0) {
        digit = n % 10;
        reverse = reverse * 10 + digit;
        n /= 10;
    }

    printf("Reverse = %d\n", reverse);
    return 0;
}
