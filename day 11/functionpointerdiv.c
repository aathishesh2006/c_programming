#include <stdio.h>
int division (int p, int q)
{
    return p/q;
}
int main()
{
    int (*fptr)(int p, int q);
    fptr = &division;
    
    printf("%d", division (40, 5));

    return 0;
}