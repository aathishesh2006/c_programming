#include <stdio.h>

void display_the_star(int n)
{
    for(int i = 1; i <= n; i++)
    {
    for(int j = 1; j <= n - i; j++)
    {
    printf(" ");
    }

    for(int k = 1; k <= (2 * i - 1); k++)
    {
    printf("*");
    }

    printf("\n");
    }

    for(int i = n - 1; i >= 1; i--)
    {
    for(int j = 1; j <= n - i; j++)
    {
    printf(" ");
    }

    for(int k = 1; k <= (2 * i - 1); k++)
    {
    printf("*");
    }

    printf("\n");
    }
}

int input()
{
    int n;

    printf("To enter the size = ");
    scanf("%d", &n);

    return n;
}

int main()
{
    int size = input();
    display_the_star(size);

    return 0;
}