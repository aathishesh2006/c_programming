#include <stdio.h>
int main()
{
    int name, normal_name, reverse_name, balance;

    printf("Enter the name : ");
    scanf("%s", &name);

    normal_name = name;

    while(1)
    {
        normal_name = reverse_name;

    }

    if(normal_name == reverse_name)
    {
        printf("The name you entered is a pollindrome", normal_name);
    }
    else
    {
        printf("The name you entered is non pollindrome", normal_name);
    }

    return 0;
}