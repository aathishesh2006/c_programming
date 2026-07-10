#include <stdio.h>
int main()
{
    int arr[5] = {2, 4, 8, 12, 16};
    printf("These are the elements in order\n ");
    for(int i=0; i<5; i++)
    {
    printf("%d ", arr[i]);
    }
    printf("\n");
    printf("These are the elements in order\n ");
    for(int i=4; i>0; i--)
    {
    printf("%d ", arr[i]);
    }

    return 0;

}