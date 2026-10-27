/* Lab 7(o): Pascal's Triangle without arrays */
#include <stdio.h>

int main(void) {
    int n, i, j;
    long long value;

    printf("Enter number of rows: ");
    scanf("%d", &n);

    for (i = 0; i < n; i++) {
        value = 1;
        for (j = 0; j <= i; j++) {
            printf("%lld ", value);
            value = value * (i - j) / (j + 1);
        }
        printf("\n");
    }

    return 0;
}
