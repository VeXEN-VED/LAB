/* Lab 7(e): Calculate x raised to the power n (n >= 0) */
#include <stdio.h>

int main(void) {
    int x, n, i;
    long long result = 1;

    printf("Enter x and n: ");
    scanf("%d %d", &x, &n);

    if (n < 0) {
        printf("Please enter a non-negative exponent.\n");
        return 0;
    }

    for (i = 0; i < n; i++) {
        result *= x;
    }

    printf("Result = %lld\n", result);
    return 0;
}
