
#include <stdio.h>

int main() {
int num;

printf("Enter a number: ");
scanf("%d", &num);

printf("Numbers in order: %d ", num);

while (num > 1) 
{
    if (num % 2 == 0) 
    {
        num = num / 2;       
    } 
    else
    {
        num = 3 * num + 1;   
    }
        printf("---> %d ", num);    
}

    printf("\n");

    return 0;
}