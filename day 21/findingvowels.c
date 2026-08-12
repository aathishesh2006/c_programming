#include <stdio.h>

void input(char str[])
{
    printf("Enter a name: ");
    scanf(" %[^\n]", str);
}

void counting(char str[], char vowelList[], char consonantList[], int *vowels, int *consonants)
{
    int vIndex = 0;
    int cIndex = 0;

for (int i = 0; str[i] != '\0'; i++)
{
char ch = str[i];

if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u' ||ch == 'A' || ch == 'E' || ch == 'I' || ch == 'O' || ch == 'U')
{
    (*vowels)++;
    vowelList[vIndex] = ch;
    vIndex++;
}
else if ((ch >= 'a' && ch <= 'z') ||(ch >= 'A' && ch <= 'Z'))
{
    (*consonants)++;
    consonantList[cIndex] = ch;
    cIndex++;
}
}

vowelList[vIndex] = '\0';
consonantList[cIndex] = '\0';
}

void display(char vowelList[], char consonantList[], int vowels, int consonants)
{
printf("\nVowels : %d\n", vowels);
printf("Vowels are in the word : %s\n", vowelList);

printf("\nConsonants : %d\n", consonants);
printf("Consonants are in the word : %s\n", consonantList);
}

int main()
{
char str[100];

char vowelList[100];
char consonantList[100];

int vowels = 0;
int consonants = 0;

    input(str);

    counting(str, vowelList, consonantList, &vowels, &consonants);

    display(vowelList, consonantList, vowels, consonants);

    return 0;
}