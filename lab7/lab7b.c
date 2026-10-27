/* Lab 7(b): Print even numbers from 1 to 20 */
#include <stdio.h>

int main(void) {
    int i;

    for (i = 2; i <= 20; i += 2) {
        printf("%d ", i);
    }
    printf("\n");

    return 0;
}
