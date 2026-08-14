#include <stdio.h>
int input()
{
    int y;
    printf("Enter the year you want to check :");
    scanf("%d", &y);

    return y;
}

void checking()
{
    int year = input();

    if(year %4 == 0)
    {
        printf("Yeah this is the leap year\n");
    }
    else
    {
        printf("Sorry you entered year is not a leap year\n");
    }    
}

int main()
{
        checking();

    return 0;
}