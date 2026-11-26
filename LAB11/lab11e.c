#include <stdio.h>

struct Book
{
    int id;
    char name[50];
    float price;
};

int main()
{
    struct Book b[5];

    for(int i = 0; i < 5; i++)
    {
        printf("\nEnter book ID, name and price:\n");

        scanf("%d", &b[i].id);
        scanf("%49s", b[i].name);
        scanf("%f", &b[i].price);
    }

    printf("\nBooks having price greater than Rs. 500:\n");

    for(int i = 0; i < 5; i++)
    {
        if(b[i].price > 500)
        {
            printf("\nID: %d", b[i].id);
            printf("\nName: %s", b[i].name);
            printf("\nPrice: %.2f\n", b[i].price);
        }
    }

    return 0;
}
