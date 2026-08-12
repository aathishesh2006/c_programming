#include <stdio.h>
void display_the_star(int n)
{

  for(int i = n; i >= 1; i--)
  {
    for(int j = 1; j <= i; j++)  
    {
    printf(" * ");
    }
    printf("\n");
  }
}                                           

int input()
{
    int n;
    printf("Enter size: ");
    scanf("%d",&n);

    return n;

}

int main()
{

    int size = input();
    display_the_star(size);
    return 0;
}