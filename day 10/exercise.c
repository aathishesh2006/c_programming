#include <stdio.h>
int main() 
{

    char ch;
    char s[10];
    char sen[100];
    
    printf(" Enter the Value for character :");
    scanf("%c", &ch);
    printf(" Enter the Value for string :");
    scanf("%9s", s);
    printf(" Enter the Value for sentence :");
    scanf(" %99[^\n]", sen);
    
    printf("%c\n", ch);
    printf("%s\n", s);
    printf("%s\n", sen); 
     
    return 0;
}