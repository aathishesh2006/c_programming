#include <stdio.h>
#include <string.h>

void scrambling(char word[], char scrambled[])
{
int i, length;

length = strlen(word);

for(i = 0; i < length - 1; i++)
{
    scrambled[i] = word[i + 1];
}

scrambled[length - 1] = word[0];
scrambled[length] = '\0';
}

int main()
{
char word[100], scrambled[100], guess[100];

printf("Enter a word: ");
scanf("%s", word);

scrambling(word, scrambled);

printf("\nScrambled word: %s\n", scrambled);

printf("Guess the original word: ");
scanf("%s", guess);

if(strcmp(word, guess) == 0)
    printf("Correct! You Win.\n");
else
    printf("Wrong! The correct word is %s\n", word);

    return 0;
}