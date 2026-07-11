#include <stdio.h>
int main()
{
    int matrix[2][3] = { {67, 89, 80},{45, 88, 75} };

    int i,j;
    for(i=0; i<2; i++)
    {
        for(j=0; j<3; j++)
    {
        printf("%d\n", matrix[i][j]);
    }
    }
    return 0;
}