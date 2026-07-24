#include <stdio.h>
#include <stdlib.h>
int main()
{
    int i;
    for(int i =0; i<10; i++)
    {
      int value = rand();
     printf("The random number in the range is : %d\n", value);
    }

    return 0;
}