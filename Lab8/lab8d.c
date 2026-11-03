#include <stdio.h>

int main()
{
    char ch1, ch2;

    printf("Enter two characters: ");
    scanf("%c %c", &ch1, &ch2);

    printf("First character: %c\n", ch1);
    printf("Second character: %c", ch2);

    return 0;
}