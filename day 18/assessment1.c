#include <stdio.h>

int input()
{
    int num;

    printf("Enter an integer: ");
    scanf("%d", &num);

    return num;
}

int reverseNumber(int num)
{
    int reverse_Num = 0;
    int answer;

    while (num != 0)
    {
    answer = num % 10;
    reverse_Num = reverse_Num * 10 + answer;
    num = num / 10;
    }

    return reverse_Num;
}

void palindrome(int normal_num)
{
    int reverse_Num;

    reverse_Num = reverseNumber(normal_num);

    if (normal_num == reverse_Num)
    {
    printf("%d is a palindrome.\n", normal_num);
    }
    else
    {
    printf("%d is not a palindrome.\n", normal_num);
    }
}

int main()
{
    int num;

    num = input();

    palindrome(num);

    return 0;
}