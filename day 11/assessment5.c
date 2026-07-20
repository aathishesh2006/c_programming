#include <stdio.h>
int main()
{
    int power = 4;
    for(int i = 0; i <= power; i--)
{
    for(int j = 0; j <= i; j++)
    {
        printf(" *");
    }
    printf("\n");
}
return 0;
}