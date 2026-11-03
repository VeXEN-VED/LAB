#include <stdio.h>

int main()
{
    char name[100], branch[100], college[100];

    printf("Enter student's name: ");
    fgets(name, sizeof(name), stdin);

    printf("Enter branch: ");
    fgets(branch, sizeof(branch), stdin);

    printf("Enter college name: ");
    fgets(college, sizeof(college), stdin);

    printf("\nStudent Details\n");

    printf("Name: %s", name);
    printf("Branch: %s", branch);
    printf("College: %s", college);

    return 0;
}