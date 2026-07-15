#include <stdio.h>
int main()
{
    char str[20];
    scanf("%19[^\n]", str);
    printf("%s", str);

    return 0;
}