#include <stdio.h>
int main()
{ 
int num, normal_num, reverse_Num = 0, answer;

printf("Enter an integer : ");
scanf("%d", &num);

normal_num = num;

while (num != 0)
{
    answer = num % 10;        
    reverse_Num = reverse_Num * 10 + answer; 
    num = num / 10;                      
}

if (normal_num == reverse_Num)
{
    printf("%d is a pallindrome.\n", normal_num);
}
else if (normal_num <100)
{
    printf("%d is not a valid number.\n", normal_num);
}                                       
else
{
    printf("%d is not a pallindrome.\n", normal_num);
}

    return 0;
}