#include <stdio.h>
int main()
{
    int a = 10;
    char b = 'x';

    void *ptr = &a;
    ptr = &b;

    return 0;
}