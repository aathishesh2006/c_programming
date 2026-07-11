#include <stdio.h>
int main()
{
    int arr[]={20000, 4000, 600, 800, 10};
    int n = sizeof(arr)/sizeof(arr[0]);

    int add = 0;

    for(int i=0;i<n;i++)
    {
       add += arr[i];
    }
    printf("add = %d", add);

    return 0;
    

}