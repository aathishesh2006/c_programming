#include <stdio.h>

int main() {
    int rows;
    printf("to enter the number of stars :");
    scanf("%d", &rows);
    for (int i = 1; i <= rows; i++)
     {
        for (int j = 0; j < rows - i; j++) 
        {
            printf(" ");
        }


        for (int k = 0; k < i; k++) 
        {
            printf(" *");
        }

        printf("\n");
    }

    return 0;
}