#include <stdio.h>

struct Date
{
    int day, month, year;
};

struct Student
{
    int roll;
    char name[50];
    int marks[3];
    struct Date dob;
};

int main()
{
    struct Student s[3];
    int total;

    for(int i = 0; i < 3; i++)
    {
        printf("\nEnter details of student %d:\n", i + 1);

        printf("Roll: ");
        scanf("%d", &s[i].roll);

        printf("Name: ");
        scanf("%49s", s[i].name);

        for(int j = 0; j < 3; j++)
        {
            printf("Enter marks of subject %d: ", j + 1);
            scanf("%d", &s[i].marks[j]);
        }

        printf("Enter DOB (day month year): ");
        scanf("%d%d%d", &s[i].dob.day,
                        &s[i].dob.month,
                        &s[i].dob.year);
    }

    printf("\nStudent Details:\n");

    for(int i = 0; i < 3; i++)
    {
        total = 0;

        printf("\nRoll: %d", s[i].roll);
        printf("\nName: %s", s[i].name);

        for(int j = 0; j < 3; j++)
        {
            printf("\nSubject %d Marks: %d", j + 1, s[i].marks[j]);
            total += s[i].marks[j];
        }

        printf("\nDOB: %d/%d/%d", s[i].dob.day,
               s[i].dob.month, s[i].dob.year);
        printf("\nTotal Marks: %d\n", total);
    }

    return 0;
}
