#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <time.h>

void input(char word[])
{
printf("Enter a word: ");
scanf("%s", word);
}

void scramble(char word[], char scrambling[])
{
int a, y, length;
char contain;

strcpy(scrambling, word);
length = strlen(scrambling);

for(a = 0; a < length; a++)
{
    y = rand() % length;

    contain = scrambling[a];
    scrambling[a] = scrambling[y];
    scrambling[y] = contain;
}
}

void guessing(char word[])
{
    char guessing[100];

while(1)
{
printf("\nGuess the original word: ");
scanf("%s", guessing);

if(strcmp(guessing, word) == 0)
    {
    printf("\nCorrect! You found the word!\n");
    break;
    }
    else
    {
    printf("Wrong! Try again.\n");
    }
}
}

int main()
{
    char word[100], scrambling[100];
    srand(time(0));
    input(word);
    scramble(word, scrambling);

    printf("\nScrambled word: %s\n", scrambling);
    guessing(word);

    return 0;
}