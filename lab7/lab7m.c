/* Lab 7(m): Right-angled triangle of asterisks */
#include <stdio.h>

int main(void) {
    int n, i, j;

    printf("Enter height: ");
    scanf("%d", &n);

    for (i = 1; i <= n; i++) {
        for (j = 1; j <= i; j++) {
            printf("* ");
        }
        printf("\n");
    }

    return 0;
}
