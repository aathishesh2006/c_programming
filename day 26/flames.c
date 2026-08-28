#include <stdio.h>
#include <string.h>

void getnames(char name_1[], char name_2[])
{
    printf("Enter the name_1 :");
    scanf("%s", name_1);

    printf("\n");

    printf("Enter the name_2 :");
    scanf("%s", name_2);

    printf("\n");

if (strcmp(name_1, name_2) == 0)
{
    printf("INVALID.\n");
}
else
{
    printf("Welcome To FLAMES game !!!\n");
    printf("%s and %s\n", name_1, name_2);
}
}

int name_len(char name_1[], char name_2[])
{
int len1 = strlen(name_1);
int len2 = strlen(name_2);

char result[100];

int found, i, j;
int k = 0;

for (i = 0; i < len2; i++)
{
    found = 0;

    for (j = 0; j < len1; j++)
    {
    if (name_2[i] == name_1[j])
    {
        found = 1;
        break;
    }
    }

    if (found == 0)
    {
        result[k] = name_2[i];
        k++;
    }
    }

    for (i = 0; i < len1; i++)
    {
        found = 0;

    for (j = 0; j < len2; j++)
    {
    if (name_1[i] == name_2[j])
    {
        found = 1;
        break;
    }
    }

    if (found == 0)
    {
        result[k] = name_1[i];
        k++;
    }
    }

    result[k] = '\0';

    int total_length = strlen(result);
    printf("Remaining count = %d\n", total_length);

    return total_length;
}

void flames(int total_length)
{
    if (total_length == 0)
    {
        printf("No remaining characters.\n");
        return;
    }

    int result = total_length % 6;

    if (result == 0)
    {
        result = 6;
    }

    printf("\n");

    switch (result)
    {
        case 1:
            printf("FLAMES Result : FRIENDS\n");
            break;

        case 2:
            printf("FLAMES Result : LOVE\n");
            break;

        case 3:
            printf("FLAMES Result : AFFECTION\n");
            break;

        case 4:
            printf("FLAMES Result : MARRIAGE\n");
            break;

        case 5:
            printf("FLAMES Result : ENEMY\n");
            break;

        case 6:
            printf("FLAMES Result : SIBLINGS\n");
            break;
    }
}

int main()
{
    char name_1[50];
    char name_2[50];

    getnames(name_1, name_2);

    int total_length;

    total_length = name_len(name_1, name_2);
    flames(total_length);

    return 0;
}