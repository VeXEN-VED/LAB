/* Lab 7(a): Sum of integers from 1 to N */
#include <stdio.h>

int main(void) {
    int n, i, sum = 0;

    printf("Enter N: ");
    scanf("%d", &n);

    for (i = 1; i <= n; i++) {
        sum += i;
    }

    printf("Sum = %d\n", sum);
    return 0;
}
