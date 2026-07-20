# include <stdio.h>
int sub(int x, int y)
{
    return x - y;
}

int main()
{
   int (*fptr)(int x, int y);
   fptr = &sub;

   printf("%d", sub(30, 8));

   return 0;
}