#include <stdio.h>

int main()
{
    int pm, marks;
    printf("passing marks: ");
    scanf("%d", &pm);
    printf("marks: ");
    scanf("%d", &marks);
    if (marks >= pm)
        printf("Pass");
    else
        printf("Fail");

    return 0;
}