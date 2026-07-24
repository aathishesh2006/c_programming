#include <stdio.h>
int main()
{
    int power = 5;
    for(int i = 1; i <= power; i++)
    {
        for(int j = 1; j <= power-i; j++)
        {
            printf(" ");
        }
        for(int k = 1; k <= i; k++)
        {
            printf("*");
        }
        printf("\n");
    }
    return 0;
}