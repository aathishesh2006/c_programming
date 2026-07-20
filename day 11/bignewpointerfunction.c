#include <stdio.h>
int add (int e, int g)
{
    return e + g;
}

int sub (int e, int g)
{
    return e - g;
}

int multiplication (int e, int g)
{
    return e * g;
}

int division (int e, int g)
{
    return e / g;
}

void calc(int e,int g, int(*op)(int ,int))
{
   printf("%d\n", (*op)(e,g));
}
int main()
{
    calc(45, 768, add);
    calc(560, 70, sub);
    calc(400, 654, multiplication);
    calc(500, 100, division);

    return 0;
}