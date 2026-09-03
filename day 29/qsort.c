#include <stdio.h>
#include <stdlib.h>

int comp(const void *a, const void *b)
{
    int x = *(const int *)a;
    int y = *(const int *)b;

    if (x < y)
    return -1;

    else if (x > y)
    return 1;

    else
    return 0;
}

int main()
{
    int arr[] = {2, 5, 3, 1, 6, 4};
    
    int n = sizeof(arr)/sizeof(arr[0]);

    qsort(arr,n,sizeof(arr[0]),comp);

    for(int i = 0; i < n; i++)
    {
        printf("%d", arr[i]);
    }

    return 0;
}