#include <stdio.h>
int main()
{
    int element_counts = 4;
    for(int i = 0; i <= element_counts; i++)
    {
        for (int j = 0; j <= element_counts; j++)
        {
            printf(" * ");
        }
        printf("\n");
    }

    return 0;
}