#include <stdio.h>
int main()
{
    char carname[] = "landcruesier";
    carname[9] = 'g';
    printf("%s", carname);

    return 0;
}