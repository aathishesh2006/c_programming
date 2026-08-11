#include <stdio.h>
#include <stdlib.h>
int main()
{
    int * ptr = (int *)malloc (5 * sizeof(int));

    if( ptr == NULL)
    {
        printf("The memory allocation is failed\n");
        exit(0);
    }

    ptr = (int *)realloc(ptr, 8 * sizeof(int));

    if(ptr == NULL)
    {
        printf("The memory reallocation is failed\n");
        exit(0);
    }

    for(int i = 0; i < 5; i++)
    {
        ptr [i] = (i + 1) * 10;
    }

    ptr = (int *)realloc(ptr, 5 * sizeof(int));

    if(ptr == NULL)
    {
        printf("The memory reallocation is failed\n");
        exit(0);
    }

    for(int i = 0; i < 5; i++)
    
        printf(" %d", ptr [i]);
    

        free (ptr);

        return 0;
}