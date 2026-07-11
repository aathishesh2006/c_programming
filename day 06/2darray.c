#include <stdio.h>
int main()
{
    int matrix[2][4] ={ {55, 58, 87, 93},{44, 89, 91, 83} };
    printf("%d\n", matrix[0][3]);

    int aathishesh [1][4] ={ {55, 58, 87, 93},{44, 89, 91, 83} };
    aathishesh [0][0] = 6;
    
printf("%d\n", aathishesh[0][0]);
    return 0;
}