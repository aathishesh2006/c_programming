#include <stdio.h>

int Partition(int arr[], int low, int high)
{
    int pivot = arr[high];
    int i = low - 1;

for(int j = low; j < high; j++)
{
    if(arr[j] < pivot)
    {
        i++;

    int temp = arr[i];
    arr[i] = arr[j];
    arr[j] = temp;

    }
}

int temp = arr[i + 1];
arr[i + 1] = arr[high];
arr[high] = temp;

return i + 1;
}

void QuickSort(int arr[], int low, int high)
{
    if(low < high)
    {
        int pivotindex = Partition(arr, low, high);

        QuickSort(arr, low, pivotindex - 1);
        QuickSort(arr, high, pivotindex + 1);

    }
}
int main()
{
    int arr[]= { 4, 2, 6, 1, 5, 3};

    int n = sizeof(arr)/sizeof(arr[0]);

    QuickSort(arr, 0, n - 1);

    for(int i = 0; i < n; i++)
    printf(" %d", arr[i]);

    return 0;

}