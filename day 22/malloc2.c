#include <stdio.h>
#include <stdlib.h>
int main()
{
    int *p;
    p = malloc(sizeof(int));
    *p = 25;

    printf("%d", *p);

    free(p);
    return 0;
}