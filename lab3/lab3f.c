#include <stdio.h>
int main()
{
    printf("%zu\n",sizeof(111));
    printf("%zu\n",sizeof(-222));
    printf("%zu\n",sizeof(405665U));
    printf("%zu\n",sizeof(0.));
    printf("%zu\n",sizeof(.0));
    printf("%zu\n",sizeof(1234e+4));
    printf("%zu\n",sizeof(1234E-5F));
    printf("%zu\n",sizeof(-1.2F));
    return 0;
}