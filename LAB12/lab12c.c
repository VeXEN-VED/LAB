#include <stdio.h>

struct Employee {
    int id;
    char name[20];
    float salary;
};

int main() {
    struct Employee e1 = {101, "Rohan", 50000}, e2;
    e2 = e1;
    e2.salary = 60000;

    printf("E1: %d %s %.2f\n", e1.id, e1.name, e1.salary);
    printf("E2: %d %s %.2f\n", e2.id, e2.name, e2.salary);
    return 0;
}
