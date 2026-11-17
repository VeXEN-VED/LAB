#include <stdio.h>

int main()
{
    int n, a[10][10], sum = 0;

    printf("Enter matrix size (maximum 10): ");
    scanf("%d", &n);

    if(n < 1 || n > 10)
    {
        printf("Invalid matrix size.\n");
        return 1;
    }

    printf("Enter matrix elements:\n");

    for(int i = 0; i < n; i++)
    {
        for(int j = 0; j < n; j++)
        {
            scanf("%d", &a[i][j]);
        }
    }

    for(int i = 0; i < n; i++)
    {
        sum = sum + a[i][i];
    }

    printf("Sum of main diagonal = %d\n", sum);

    return 0;
}
