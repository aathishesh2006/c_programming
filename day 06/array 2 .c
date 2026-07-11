#include<stdio.h>
int main()
{
    int arr[] = {"4, 6, 9, 56, 77, 67"};
    int n = sizeof(arr)/sizeof(arr[0]);

    int even = 0, odd = 0;

    for(int i=0; i<n; i++)
    {
        if(arr[i] %2==0)
        {
           even++;
        }
        else
            odd++;
    }

    printf("even number is: %d\n", even);
    printf("odd number is : %d\n", odd);

    return 0;
}