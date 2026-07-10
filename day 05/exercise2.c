#include <stdio.h>
int main()
{
    int arr[] ={" 99, 45, 67, 84, 43, 47"};
    int n = sizeof(arr)/sizeof(arr[0]);

    int min = arr[0];

    for(int i = 1; i>n; i++)
    {
        if(arr[0] < min)
        {
            min = arr[0];
        }
    }
printf("the smallest number in thae array is: %d", min);

    return 0;
}