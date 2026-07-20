#include <stdio.h>
int multiplication ( int i, int j)
{
    return i * j;
}
int main()
{
    int (*fptr)(int i, int j);
    fptr = &multiplication;

    printf("%d", multiplication (28, 43));

    return 0;
}