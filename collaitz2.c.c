#include <stdio.h>

int main() {
    int number, round = 1;

    printf("Enter the number for collatz conjective   :   ");
    scanf("%d", &number);

    printf("The number is : %d\n", number);

while (number > 1)
{
    if (number % 2 == 0) 
    {
        printf("After round %d : \n", round);
        printf("The number is %d : It is Even\n  ,so n/2 = \n", number);
        number = number / 2;
        printf("%d\n", number);
    }
    else 
    {
        printf("After round %d : \n", round);
        printf("The number is %d : It is Odd\n  ,so 3*n+1 = \n", number);
        number = 3 * number + 1;
        printf("%d\n", number);
    }
    round++;
}

return 0;
}