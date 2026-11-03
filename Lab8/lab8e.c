#include <stdio.h>

int main()
{
    char ch;

    printf("Enter a lowercase alphabet: ");
    scanf("%c", &ch);

    ch = ch - 32;

    printf("Uppercase character: %c", ch);

    return 0;
}