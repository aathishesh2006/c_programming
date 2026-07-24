#include <stdio.h>
#include <stdlib.h>
void opinion()
{   
    int guess;
    printf("Enter your guessing number :");
    scanf("%d",&guess);
}

int main()
{
    int num = 100;

    for(int i = 0; i <= 10; i++)
    {
        int value = rand()%(num + 1);
        opinion();
    }
}
