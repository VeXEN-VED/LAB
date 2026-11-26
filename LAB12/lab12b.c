#include <stdio.h>

struct Employee {
    int id;
    char name[20];
    float salary;
};

int main() {
    struct Employee e;
    printf("Enter ID, Name, Salary: ");
    scanf("%d %s %f", &e.id, e.name, &e.salary);

    printf("ID: %d\nName: %s\nSalary: %.2f\n", e.id, e.name, e.salary);
    return 0;
}
