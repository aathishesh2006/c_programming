#include <stdio.h>
int multiplication(int r, int j)
{
    return r * j;
}

int main()
{
    int t;
    printf("Enter the number of the t : = ");
    scanf("%d",&t);
    int answer = multiplication(t,50);
    printf(" The solution of the question is %d", answer);
    
    return 0;

}