#include <stdio.h>
#include <string.h>

int main()
{
    char name[100];
    int roll,marks;

    printf("student name: ");
    fgets(name, sizeof(name), stdin);

    printf("Enter roll number: ");
    scanf("%d", &roll);

    printf("Enter marks: ");
    scanf("%f", &marks);

    printf("\n----- Student Details -----\n");
    printf("Name       : %s\n", name);
    printf("Roll Number: %d\n", roll);
    printf("Marks      : %d\n", marks);

    return 0;
}
