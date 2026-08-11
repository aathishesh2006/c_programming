#include <stdio.h>
#include <stdlib.h>
int main()
{
    int *ptr = (int *)calloc(5, sizeof(int));

    if (NULL == ptr)
    {
    printf("The allocation failed");
    exit(0);
    }

for(int i = 0; i < 5; i++)
printf(" %d", ptr [i]);

return 0;
}