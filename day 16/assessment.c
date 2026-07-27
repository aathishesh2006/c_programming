#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
  
    int random, guess, difference;

srand(time(0));
random = rand() % 101;   

while (1)
{
    printf("Guess the correct number from (1-100): ");
    scanf("%d", &guess);

    difference = abs(random - guess);

    if (guess == random)
    {
        printf("Congrats! You identified the number correctly.\n");
        break;
    }
    
    else if (difference <= 5)
    {
        printf("You are very close to the number!\n");

        if (guess < random)
            printf("But your guess is low.\n");
        else
            printf("But your guess is high.\n");
    }
    
    else if (difference <= 10)
    {
        printf("You are near to the number!\n");

        if (guess < random)
            printf("But your guess is low.\n");
        else
            printf("But your guess is high.\n");
    }
        else
    {
        if (guess < random)
            printf("Sorry! Your guess is too low.\n");
        else
            printf("Sorry! Your guess is too high.\n");
    }
}

    printf("The correct number was: %d\n", random);

    return 0;
}