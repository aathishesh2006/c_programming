#include <stdio.h>
int main() {

    int caterns = 5;

    for (int i = 0; i < caterns; i++)
     {
        for (int j = 0; j < i; j++)
         {
            printf("  ");
         }
        for (int k = 0; k < caterns - i; k++)
         {
            printf(" *");
         }
        printf(" \n");
     }

    return 0;
}