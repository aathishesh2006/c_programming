# include <stdio.h>
# include <stdlib.h>
# include <time.h>

void option()
{
    int guess;
    printf(" To guess the random number here : ");
    scanf("%d", & guess);
}

int main()
{
    int Num = 100;

    for(int i = 0; i < Num; i++)
    {
        int value = rand() % (Num+1);
        option();
    }

    if(option > Num)
    {
    printf("You are high");
    }
    else
    {
    printf(" you are low");
    }     
    return 0;
}
