/* Lab 7(g): Sum positive integers until a negative integer is entered */
#include <stdio.h>

int main(void) {
    int n, sum = 0;

    do {
        printf("Enter an integer (negative to stop): ");
        scanf("%d", &n);

        if (n > 0) {
            sum += n;
        }
    } while (n >= 0);

    printf("Sum = %d\n", sum);
    return 0;
}
