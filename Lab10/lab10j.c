#include <stdio.h>
#include <ctype.h>

int main()
{
    char str[100];
    int i;

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    for(i = 0; str[i] != '\0'; i++)
    {
        if(islower((unsigned char)str[i]))
        {
            str[i] = (char)toupper((unsigned char)str[i]);
        }
        else if(isupper((unsigned char)str[i]))
        {
            str[i] = (char)tolower((unsigned char)str[i]);
        }
    }

    printf("Converted string = %s", str);

    return 0;
}
