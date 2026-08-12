#include <stdio.h>

void input(char str[])
{
printf("Enter a name: ");
scanf(" %[^\n]", str);
}

void count(char str[])
{
int vowels = 0;
int consonants = 0;

for (int i = 0; str[i] != '\0'; i++)
{
    char ch = str[i];

if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u' ||ch == 'A' || ch == 'E' || ch == 'I' || ch == 'O' || ch == 'U')
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
    printf("Consonants: %d\n", consonants);
}

int main()
{
    char str[100];
    input(str);
    count(str);

    return 0;
}