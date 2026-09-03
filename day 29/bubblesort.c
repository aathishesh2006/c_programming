#include <stdio.h>

void BubbleSort(int arr[], int n)
{
    for(int i = 0; i < n -1; i++)
    {
        for(int j = 0; j < n -1-i; j++)
        {
            if (arr[j] > arr[j+1])
            {
                int temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
        }
    }
}

int main()
{
    int arr[100];
    int n;

    printf("ENTER THE NUMBER OF ELEMENTS HERE :");
    scanf("%d", &n);


    printf("Enter %d elements:\n", n);

    for(int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    BubbleSort(arr, n);
    printf("Sorted array:\n");

        for(int i = 0; i < n; i++)
    {
        printf(" %d", arr[i]);

    }


    return 0;
}
