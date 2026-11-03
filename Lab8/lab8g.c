#include <stdio.h>

int main()
{
    char name[100];

    printf("Enter student's name: ");
    fgets(name, sizeof(name), stdin);

    puts("Student's name:");
    puts(name);

    return 0;
}