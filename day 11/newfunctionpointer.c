#include <stdio.h>
int add(int u, int v)
{
    return u + v;
}

int sub (int u, int v)
{
    return u - v;
}

void calc(int u, int v, int(*op)(int, int))
{
   printf("%d\n", (*op)(u,v));
}
int main()
{
    calc(500, 600, add);
    calc(87, 80, sub);

return 0;
}