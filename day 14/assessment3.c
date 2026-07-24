#include <stdio.h>
int main()
{
    int elements = 4;
    for(int i = 1; i <= elements; i++)
    {
        for(int j =1; j <= elements-i; j++)
        {
            printf(" ");
        }
        for(int k=1; k <= (2 * i - 1); k++)
        {
            printf("*");
        }
        printf("\n");
    }
     
    for(int i =elements-i; i >= 1; i--)
    {
        for(int j=1; j <= elements-i; j++)
        {
            printf(" ");
        }
        for( int k =1; k <= (2 * i - 1); k++)
        {
            printf("*");
        }
        printf("\n");
    }

     return 0;
}