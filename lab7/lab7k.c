/* Lab 7(k): Menu-driven calculator using do-while */
#include <stdio.h>

int main(void) {
    int choice, a, b, i;
    long long result;

    do {
        printf("\n1. Add\n2. Subtract\n3. Multiply\n");
        printf("4. Divide\n5. Power\n0. Exit\n");
        printf("Enter choice: ");
        scanf("%d", &choice);

        if (choice >= 1 && choice <= 5) {
            printf("Enter two integers: ");
            scanf("%d %d", &a, &b);
        }

        switch (choice) {
            case 1:
                printf("Result = %d\n", a + b);
                break;
            case 2:
                printf("Result = %d\n", a - b);
                break;
            case 3:
                printf("Result = %d\n", a * b);
                break;
            case 4:
                if (b != 0)
                    printf("Result = %.2f\n", (double)a / b);
                else
                    printf("Division by zero is not allowed.\n");
                break;
            case 5:
                if (b < 0) {
                    printf("Use a non-negative exponent.\n");
                    break;
                }
                result = 1;
                for (i = 0; i < b; i++) {
                    result *= a;
                }
                printf("Result = %lld\n", result);
                break;
            case 0:
                printf("Exiting calculator.\n");
                break;
            default:
                printf("Invalid choice.\n");
        }
    } while (choice != 0);

    return 0;
}
