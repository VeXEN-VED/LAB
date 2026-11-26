#include <stdio.h>

struct Address
{
    char city[50];
    char state[50];
    int pin;
};

struct Employee
{
    int id;
    char name[50];
    struct Address a;
};

int main()
{
    struct Employee e;

    printf("Enter employee ID: ");
    scanf("%d", &e.id);

    printf("Enter employee name: ");
    scanf("%49s", e.name);

    printf("Enter city: ");
    scanf("%49s", e.a.city);

    printf("Enter state: ");
    scanf("%49s", e.a.state);

    printf("Enter PIN code: ");
    scanf("%d", &e.a.pin);

    printf("\nEmployee Details:\n");
    printf("ID: %d\n", e.id);
    printf("Name: %s\n", e.name);
    printf("City: %s\n", e.a.city);
    printf("State: %s\n", e.a.state);
    printf("PIN: %d\n", e.a.pin);

    return 0;
}
