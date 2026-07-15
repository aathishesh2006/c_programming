#include <stdio.h>
int main()
{
    char str[30] = "geeks";

    char* ptr = str;
    while(*ptr != '\0'){
        printf("%c", *ptr);
        ptr++;
    }
}