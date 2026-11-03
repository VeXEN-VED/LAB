#include <stdio.h>

int main()
{
    char str[100];

    printf("Enter a string: ");
    scanf("%s", str);

    printf("First character: %c", str[0]);

    return 0;
}