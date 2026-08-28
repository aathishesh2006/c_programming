#include <stdio.h>
#include <string.h>
#include <ctype.h>

void getnames(char name_1[], char name_2[])
{
    printf("Enter the name_1 : ");
    scanf("%49s", name_1);

    printf("\n");

    printf("Enter the name_2 : ");
    scanf("%49s", name_2);

    printf("\n");

    if (strcmp(name_1, name_2) == 0)
    {
        printf("INVALID...\n");
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

    int used[50] = {0};
    int common = 0;
    int i, j;

    for (i = 0; i < len1; i++)
    {
        name_1[i] = tolower((unsigned char)name_1[i]);
    }

    for (i = 0; i < len2; i++)
    {
        name_2[i] = tolower((unsigned char)name_2[i]);
    }


    for (i = 0; i < len1; i++)
    {
    for (j = 0; j < len2; j++)
    {
        if (name_1[i] == name_2[j] && used[j] == 0)
        {
        common++;
        used[j] = 1;
        break;
        }
    }
    }

    int total_length = (len1 - common) + (len2 - common);

    printf("Common characters = %d\n", common);
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

    char flames[] = {'F', 'L', 'A', 'M', 'E', 'S'};

    int size = 6;
    int index = 0;

    while (size > 1)
    {
    index = (index + total_length - 1) % size;

    for (int i = index; i < size - 1; i++)
    {
        flames[i] = flames[i + 1];
    }

    size--;

    if (index == size)
    {
        index = 0;
    }
    }


    printf("\n");

    switch (flames[0])
    {
        case 'F':
            printf("FLAMES Result : FRIENDS\n");
            break;

        case 'L':
            printf("FLAMES Result : LOVE\n");
            break;

        case 'A':
            printf("FLAMES Result : AFFECTION\n");
            break;

        case 'M':
            printf("FLAMES Result : MARRIAGE\n");
            break;

        case 'E':
            printf("FLAMES Result : ENEMY\n");
            break;

        case 'S':
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