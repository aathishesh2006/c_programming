#include <stdio.h>

void SelectionSort (int arr[], int n)
{
    for(int i = 0; i <n-1; i++)
    {
        int min = i;
        for(int j = i + 1; j < n; j++)
        {
            if(arr[j]<arr[min])
            min = j;
        }
        if(min != i)
        {
            int temp = arr[min];
            arr[min] = arr[i];
            arr[i] = temp;
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

    SelectionSort(arr, n);
    printf("Sorted array:\n");

        for(int i = 0; i < n; i++)
    {
        printf("%d", arr[i]);

    }


    return 0;
}