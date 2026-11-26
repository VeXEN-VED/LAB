#include <stdio.h>

struct Employee
{
    int id;
    char name[50];
    float salary;
};

int main()
{
    struct Employee e[5];
    int max = 0;

    for(int i = 0; i < 5; i++)
    {
        printf("\nEnter details of employee %d:\n", i + 1);

        printf("ID: ");
        scanf("%d", &e[i].id);

        printf("Name: ");
        scanf("%49s", e[i].name);

        printf("Salary: ");
        scanf("%f", &e[i].salary);

        if(i == 0 || e[i].salary > e[max].salary)
        {
            max = i;
        }
    }

    printf("\nEmployee with highest salary:\n");
    printf("ID: %d\n", e[max].id);
    printf("Name: %s\n", e[max].name);
    printf("Salary: %.2f\n", e[max].salary);

    return 0;
}
