#include <stdio.h>

int main() 
{
    char str[100];
    int vowels = 0, consonants = 0;

    printf("Enter a name: ");
    scanf("%[^\n]s", str);

for (int i = 0; str[i] != '\0'; i++)
    {
    char ch = str[i];

if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u' ||
    ch == 'A' || ch == 'E' || ch == 'I' || ch == 'O' || ch == 'U')         
    {
        vowels++;
    }
else if (ch >= 'a' && ch <= 'z') 
    {
    consonants++;
    }
else if (ch >= 'A' && ch <= 'Z') 
    {
    consonants++;
    }
}

printf("Vowels: %d\n", vowels);
printf("The vowels are : %c\n", str[100]);
printf("Consonants: %d\n", consonants);
printf("The consonants are : %c\n", str[100]);

    return 0;
}