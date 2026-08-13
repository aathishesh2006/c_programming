#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <time.h>

int main()
{
char word[100], scrambling[100], guessing[100], contain;
int a, y, length;

srand(time(0));

printf("Enter a word: ");
scanf("%s", word);

strcpy(scrambling, word);

length = strlen(scrambling);

for(a = 0; a < length; a++)
{
y = rand() % length;

contain = scrambling[a];
scrambling[a] = scrambling[y];
scrambling[y] = contain;
}

printf(" \nScrambled word: %s \n", scrambling);

while(1)
{
    printf(" \nGuess the original word: ");
    scanf("%s", guessing);

    if(strcmp(guessing, word) == 0)
    {
    printf(" \nCorrect! You found the word! \n");
    break;
    }
    else
    {
    printf("Wrong! Try again.");
    }
}

return 0;
}