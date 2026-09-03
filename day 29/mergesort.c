#include <stdio.h>
#include <stdlib.h>

void merge(int arr[], int left, int mid, int right)
{
    int i,j,k;
    int group1 = mid - left + 1;
    int group2 = right - mid;

    int leftArr[group1], rightArr[group2];

    for(i = 0; i < group1; i++)
    leftArr[i] = arr[left + i];
    for(j = 0; j < group2; j++)
    rightArr[j] = arr[mid + 1 + j];

    i = 0;
    j = 0;
    k = left;

    while(i < group1 && j < group2)
    {
        if(leftArr[i] <= rightArr[j])
        {
            arr[k] = leftArr[i];
            i++;
        }
        else
        {
            arr[k] = rightArr[j];
            j++;
        }
        k++;
    }

    while(i < group1)
    {
        arr[k] = leftArr[i];
        i++;
        k++;
    }
    while(j < group2)
    {
        arr[k] = rightArr[j];
        j++;
        k++;
    }
}

void MergeSort(int arr[], int left, int right)
{
    if(left < right)
    {
        int mid = left + (right - left) / 2;

        MergeSort(arr, left, mid);
        MergeSort(arr, mid + 1, right);

        merge(arr, left, mid, right);
    }
}
int main() 
{
    int arr[] = { 12, 11, 13, 5, 6, 7 };
    int n = sizeof(arr) / sizeof(arr[0]);
	
    MergeSort(arr, 0, n - 1);

    for (int i = 0; i < n; i++)
        printf("%d ", arr[i]);
    return 0;
}