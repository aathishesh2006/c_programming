#include <stdio.h>
int main()
{
    int sure ;
    printf("To enter the number of stars :");
    scanf("%d", &sure);
    for(int i = 0; i <= sure; i++)
    {
        for(int j = 0; j <= i; j++)
        {
            printf(" * ");
        }
        printf("\n");

    }
    return 0;
}