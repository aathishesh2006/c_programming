#include <stdio.h>
void display_the_pattern(int n)
{
    int power = 4;
    for (int i = 0; i <= power; i++)
    {
     for (int j = 0; j <= i; j++)
    {
        printf(" *");
    }
    printf("\n");
    }
}                                                                                         

int input()
{
    int n;
    printf("Enter the size : ");
    scanf("%d", &n);

    return n;
}

int main()
{
    int size = input();
    display_the_pattern(size);
    return 0;
}

    