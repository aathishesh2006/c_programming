#include <stdio.h>
# include <stdlib.h>
# include <time.h>

int main()
{
    int random,guess;

    srand(time(0));
    random = rand() % (100 +1);


    int mar = 5;
    for(int i =0; i<=mar ; i++)
{
    printf(" Guess the correct number from the range of (1-100): ");
    scanf("%d", & guess);


    if(guess == random)
    {
        printf("Congrats you identify the number correctly");
        break;
    }
    else if(guess < random)
    {
        printf("Sorry you identidied number is low\n");
    }

    else
    {
        printf("Sorry you identified number is high\n");
    }
}

printf("The correct number is: %d", random);
    return 0;
}