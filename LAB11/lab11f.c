#include <stdio.h>

struct Product
{
    int id;
    char name[50];
    float price[3];
};

int main()
{
    struct Product p;
    int min = 0;

    printf("Enter product ID: ");
    scanf("%d", &p.id);

    printf("Enter product name: ");
    scanf("%49s", p.name);

    for(int i = 0; i < 3; i++)
    {
        printf("Enter price in shop %d: ", i + 1);
        scanf("%f", &p.price[i]);

        if(i == 0 || p.price[i] < p.price[min])
        {
            min = i;
        }
    }

    printf("\nProduct ID: %d", p.id);
    printf("\nProduct Name: %s", p.name);
    printf("\nLowest Price: %.2f", p.price[min]);
    printf("\nShop Number: %d\n", min + 1);

    return 0;
}
