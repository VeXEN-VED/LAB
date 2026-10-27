/* Lab 7(i): Convert decimal number to binary */
#include <stdio.h>

int main(void) {
    int n, remainder;
    long long binary = 0, place = 1;

    printf("Enter a non-negative decimal number: ");
    scanf("%d", &n);

    if (n < 0) {
        printf("Please enter a non-negative number.\n");
        return 0;
    }

    if (n == 0) {
        printf("Binary = 0\n");
        return 0;
    }

    while (n > 0) {
        remainder = n % 2;
        binary += remainder * place;
        place *= 10;
        n /= 2;
    }

    printf("Binary = %lld\n", binary);
    return 0;
}
