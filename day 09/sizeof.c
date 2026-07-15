#include <stdio.h>
int main()
{
    char friend1[] = {'A', 'R', 'U', 'N', '\0'};
    char friend2[] = {"Suriya"};

    printf("%zu\n", sizeof (friend1));
    printf("%zu\n", sizeof(friend2));

    return 0;
}