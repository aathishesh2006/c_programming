#include <stdio.h>

int slot_size()
{
    int size;
    printf("To enter the board size :");
    scanf("%d", size);
    return size;
}
void title_of_slot_size(int size)
{
    printf("\n\n %d X %d slot \n\n", size,size);

}
void slot(int size, int arr[size][size])
{
    int element = 1;
    for (int i = 0; i < size; i++)
    {
        for(int j = 0; j < size; j++)
        {
            arr[i][j] = element++;
        }
    } 
}
void slot(int size, int arr[size][size])
{
    int element = 1;
    for (int i = 0; i < size; i++)
    {
        for(int j = 0; j < size; j++)
        {
            arr[i][j] = element++;
        }
    } 
}
