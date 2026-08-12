#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int input()
{
    int guess;
    printf("Guess the correct number from the range of (1-100): ");
    scanf("%d", &guess);

    return guess;
}

int randomNumber()
{
    srand(time(0));
    return rand() % 100 + 1;
}

void game(int random)
{
    int guess;

    while(1)
    {
    guess = input();

        if(guess == random)
        {
        printf("Congrats! You identified the number correctly\n");
        break;
        }
        else if(guess < random)
        {
        printf("Sorry, your identified number is low\n");
        }
        else
        {
        printf("Sorry, your identified number is high\n");
        }
    }
}

int main()
{
    int random = randomNumber();
    game(random);
    printf("The correct number is: %d\n", random);

    return 0;
}