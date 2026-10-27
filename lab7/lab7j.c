/* Lab 7(j): Add numbers until the user enters 0 */
#include <stdio.h>

int main(void) {
    int n, sum = 0;

    do {
        printf("Enter a number (0 to stop): ");
        scanf("%d", &n);
        sum += n;
    } while (n != 0);

    printf("Sum = %d\n", sum);
    return 0;
}
