#include <stdio.h>
int main()
{ 
  
int num, original_num, reverse_Num = 0, remainder;

printf("Enter an integer: ");
scanf("%d", &num);

original_num = num;

 while (num != 0)
{
    remainder = num % 10;                
    reverse_Num = reverse_Num * 10 + remainder; 
    num = num / 10;                       
}

if (original_num == reverse_Num)
{
    printf("%d is a pallindrome.\n", original_num);
}
else
{
    printf("%d is not a palindrome.\n", original_num);
}                                       

    return 0;
}
