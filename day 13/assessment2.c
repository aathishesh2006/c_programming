#include <stdio.h>
int main()
{
    int sure = 4;
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