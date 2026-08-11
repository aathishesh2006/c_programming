#include <stdio.h>

void display_the_star(int n)
{
    for(int i = 0; i < n; i++)
    {
        for(int j = 0; j < n; j++)
        {
            printf("* ");
        }
        printf("\n");
    }
}

int input()
{
    int n;
    printf("Enter size: ");
    scanf("%d",&n);

    return n;

}

int main()
{

    int size = input();
    display_the_star(size);
    return 0;
}