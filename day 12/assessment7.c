#include <stdio.h>
void display_the_star(int n)
{
for (int i = 0; i < n; i++)
{
   for (int j = 0; j < i; j++)
   {
      printf("  ");
   }
   for (int k = 0; k < n - i; k++)
   {
      printf(" *");
   }
   printf(" \n");
}
}

int input() 
{
   int n;
   printf("Enter the size :");
   scanf("%d",&n);

   return n;
}

int main()
{
   int size = input();
   display_the_star(size);

   return 0;
}