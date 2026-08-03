# include <stdio.h>
int main()
{
char word[] = "code";
for (int i = 0; word[i] != '\0'; i++) 
{
printf("Index %d: %c\n", i, word[i]);
}
return 0;
}