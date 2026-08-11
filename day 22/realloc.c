#include <stdio.h>
#include <stdlib.h>
int main()
{
    int *ptr = (int *)malloc(5 * sizeof(int));
    ptr = (int *)realloc(ptr, 10 * sizeof(int));

    if (ptr = NULL)
    {
        printf("Memory reallocation failed");
        exit (0);
    }
    return 0;
} 