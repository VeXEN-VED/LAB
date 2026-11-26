#include <stdio.h>

struct Student {
    int roll;
    char name[20];
    float marks;
};

int main() {
    struct Student s = {1, "Ved", 95.0};
    struct Student *p = &s;

    printf("Roll: %d\nName: %s\nMarks: %.1f\n", p->roll, p->name, p->marks);
    return 0;
}
