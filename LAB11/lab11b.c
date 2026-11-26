#include <stdio.h>

struct Student
{
    int roll;
    char name[50];
    float marks[3];
};

int main()
{
    struct Student s;
    float total = 0, avg;

    printf("Enter roll number: ");
    scanf("%d", &s.roll);

    printf("Enter name: ");
    scanf("%49s", s.name);

    for(int i = 0; i < 3; i++)
    {
        printf("Enter marks of subject %d: ", i + 1);
        scanf("%f", &s.marks[i]);
        total += s.marks[i];
    }

    avg = total / 3;

    printf("\nRoll: %d\n", s.roll);
    printf("Name: %s\n", s.name);
    printf("Total: %.2f\n", total);
    printf("Average: %.2f\n", avg);

    return 0;
}
