#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <time.h>

int main()
{
char word[100], scrambled[100], guess[100], contain;
int a, y, length;

srand(time(0));

printf("Enter a word: ");
scanf("%s", word);

strcpy(scrambled, word);

length = strlen(scrambled);

for(a = 0; a < length; a++)
{
y = rand() % length;

contain = scrambled[a];
scrambled[a] = scrambled[y];
scrambled[y] = contain;
}

printf("\nScrambled word: %s\n", scrambled);

while(1)
{
    printf("\nGuess the original word: ");
    scanf("%s", guess);

    if(strcmp(guess, word) == 0)
    {
    printf("\nCorrect! You found the word!\n");
    break;
    }
    else
    {
    printf("Wrong! Try again.");
    }
}

return 0;
}