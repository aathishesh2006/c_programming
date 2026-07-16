#include <stdio.h>
#include <stdlib.h>
int main()
{
    int* ptr =(int*)malloc(sizeof(ptr));
    free(ptr);
    
    printf("get the size successfull\n");
    ptr = NULL;

    return 0;
}