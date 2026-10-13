#include <stdio.h>
int main()
{
    int n;
    printf("enter any ni");
    scanf("%d",&n);

    for (int i =1;i<=n;i++){
    printf("%d",i);
printf("\n");}
    
printf("\n");
    for(int l=1;l<=(1+(n-1)*2);l++){
            printf("%d",l);
            printf("\n");
        }
        printf("\n");
    
    for(int j=1;j<=(2+(n-1)*2);j++){

        printf("%d",j);
        printf("\n");
    }
return 0;
}