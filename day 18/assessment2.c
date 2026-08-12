#include <stdio.h>
#include <string.h>

void input(char word[])
{
printf("Enter a word: ");
scanf("%99s", word);
}

int palindrome(char word[])
{
int length;
int isPalindrome = 1;

length = strlen(word);

for (int i = 0; i < length / 2; i++)
{
if (word[i] != word[length - 1 - i])
{
    isPalindrome = 0;
    break;
}
}

return isPalindrome;
}

int main()
{
char word[100];

input(word);

if (palindrome(word))
{
    printf("%s is a palindrome.\n", word);
}
else
{
    printf("%s is not a palindrome.\n", word);
}

return 0;
}