#include <stdio.h>
#include <string.h>

int main()
{

    char word[100];

    int length;
    int isPalindrome = 1;

    printf("Enter a word: ");
    scanf("%99s", word);

    length = strlen(word);

for (int i = 0; i < length / 2; i++)
{
    if (word[i] != word[length - 1 - i])
    {
        isPalindrome = 0;
        break;
    }
}

if (isPalindrome)
    printf("%s is a palindrome.\n", word);
else
    printf("%s is not a palindrome.\n", word);

return 0;
}