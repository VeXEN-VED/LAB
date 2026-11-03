#include <stdio.h>

int main()
{
    char str1[100], str2[100];

    printf("Enter first string: ");
    scanf("%s", str1);

    printf("Enter second string: ");
    scanf("%s", str2);

    printf("First string: %s\n", str1);
    printf("Second string: %s", str2);

    return 0;
}