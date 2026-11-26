#include <stdio.h>

struct Student {
    int roll;
    char name[20];
    float marks;
};

int main() {
    struct Student s1 = {1, "Ved", 92.5}, s2;
    s2 = s1;

    printf("S1: %d %s %.1f\n", s1.roll, s1.name, s1.marks);
    printf("S2: %d %s %.1f\n", s2.roll, s2.name, s2.marks);
    return 0;
}
