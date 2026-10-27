/* Lab 7(d): Fibonacci sequence using a for loop, without arrays
   Question 4 is identical to Question 3 in the provided assignment. */
#include <stdio.h>

int main(void) {
    int n, i, a = 0, b = 1, next;

    printf("Enter number of terms: ");
    scanf("%d", &n);

    for (i = 0; i < n; i++) {
        printf("%d ", a);
        next = a + b;
        a = b;
        b = next;
    }
    printf("\n");

    return 0;
}
