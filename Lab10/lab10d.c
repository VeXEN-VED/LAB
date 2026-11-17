#include <stdio.h>

int main()
{
    int a[3][3], sum = 0;

    printf("Enter matrix elements:\n");

    for(int i = 0; i < 3; i++)
    {
        for(int j = 0; j < 3; j++)
        {
            scanf("%d", &a[i][j]);
            sum = sum + a[i][j];
        }
    }

    printf("Sum of all elements = %d\n", sum);

    return 0;
}
