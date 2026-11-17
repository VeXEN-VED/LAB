#include <stdio.h>

int main()
{
    int a[3][3], max;

    printf("Enter matrix elements:\n");

    for(int i = 0; i < 3; i++)
    {
        for(int j = 0; j < 3; j++)
        {
            scanf("%d", &a[i][j]);
        }
    }

    max = a[0][0];

    for(int i = 0; i < 3; i++)
    {
        for(int j = 0; j < 3; j++)
        {
            if(a[i][j] > max)
            {
                max = a[i][j];
            }
        }
    }

    printf("Largest element = %d\n", max);

    return 0;
}
