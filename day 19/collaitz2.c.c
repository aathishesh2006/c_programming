#include <stdio.h>

int input()
{
int number;

printf("Enter the number for Collatz conjecture: ");
scanf("%d", &number);

    return number;
}

void collatz(int number)
{
int round = 1;

printf("The number is: %d\n", number);

while (number > 1)
{
    if (number % 2 == 0)
{
    printf("After round %d:\n", round);
    printf("The number is %d: It is Even\n", number);

    number = number / 2;

    printf("So n / 2 = %d\n", number);
}
    else
{
    printf("After round %d:\n", round);
    printf("The number is %d: It is Odd\n", number);

    number = 3 * number + 1;

    printf("So 3 * n + 1 = %d\n", number);
}

    round++;
}
}

int main()
{
int number;
number = input();
collatz(number);

return 0;
}