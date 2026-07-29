#include <stdio.h>
#include <string.h>

int main()
{
    char word[100];
    int length, Palindrome = 1;

    printf("Enter a word: ");
    scanf("%s", word);

    length = strlen(word);
  
for (int i = 0; i < length / 2; i++) 
{
    if (word[i] != word[length - 1 - i])
    {
    Palindrome = 0; 
        break;            
    }
}
if (Palindrome) 
{
    printf("Yes! It is a palindrome.\n");
}
 else 
{
    printf("No! It is not a palindrome.\n");
}

return 0;                                                                 
}