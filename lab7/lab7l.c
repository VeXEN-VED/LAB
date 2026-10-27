/* Lab 7(l): Number guessing game using a fixed secret number */
#include <stdio.h>

int main(void) {
    int secret = 50, guess;

    do {
        printf("Guess a number: ");
        scanf("%d", &guess);

        if (guess > secret) {
            printf("Too High!\n");
        } else if (guess < secret) {
            printf("Too Low!\n");
        } else {
            printf("Correct!\n");
        }
    } while (guess != secret);

    return 0;
}
