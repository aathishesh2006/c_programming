#include <stdio.h>

int sub(int j)
{
    return j-j;
}

int main()
{
    int answer;
    answer = sub(88);
    printf("The subractive anwser is : %d", answer );

    return 0;
}