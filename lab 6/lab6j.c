#include <stdio.h>

int main()
{
    char _;

    printf("enter alphabet");
    scanf(" %c", &_);
 if ((_ == 'u') || (_ == 'o') || (_ == 'i') || (_ == 'e') || (_ == 'a'))
    {
         printf("%c is vowel", _);
    }
    else
    {
        printf("%c is consonant", _);
    }

    return 0;
}