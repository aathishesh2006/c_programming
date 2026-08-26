#include <stdio.h>

int slot_size()
{
    int size;
    printf("To enter the board size : ");
    scanf("%d", &size);
    return size;
}

void title_of_slot_size(int size)
{
    printf("\n\n %d X %d slot \n\n", size, size);
}

void slot(int size, int arr[size][size])
{
    int element = 1;
    for (int i = 0; i < size; i++)
    {
    for (int j = 0; j < size; j++)
    {
    arr[i][j] = element++;
    }
    }
}

void slot_output(int size, int arr[size][size])
{
    for (int i = 0; i < size; i++)
    {
    for (int j = 0; j < size; j++)
    {
    if (arr[i][j] == -1)
    {
    printf(" O ");
    }
    else if (arr[i][j] == -2)
    {
    printf(" X ");
    }
    else
    {
    printf(" %02d ", arr[i][j]);
    }
    }
    printf("\n");
    }
}

void gamestart(int size, int arr[size][size], int element)
{
    int x, y, a, b;
    while (1)
    {
    printf("\nEnter here %s: ",
    (element == -1) ? "O" : "X");
    scanf("%d", &x);

    if (x < 1 || x > size * size)
    {
    printf("Invalid position...\n");
    continue;
    }

    y = x - 1;
    a = y / size;
    b = y % size;

    if (arr[a][b] == -1 || arr[a][b] == -2)
    {
    printf("Occupied...\n");
    }
    else
    {
    arr[a][b] = element;
    break;
    }
    }
}

int gamerule(int size, int arr[size][size], int element)
{
    int rows, columns;
    int win;

    for (rows = 0; rows < size; rows++)
    {
    win = 1;

    for (columns = 0; columns < size; columns++)
    {
    if (arr[rows][columns] != element)
    {
    win = 0;
    break;
    }
    }

    if (win == 1)
    {
    return 1;
    }
    }

    for (columns = 0; columns < size; columns++)
    {
    win = 1;
    for (rows = 0; rows < size; rows++)
    {
    if (arr[rows][columns] != element)
        {
        win = 0;
        break;
        }
    }

    if (win == 1)
    {
        return 1;
    }
    }

    win = 1;

    for (rows = 0; rows < size; rows++)
    {
    if (arr[rows][rows] != element)
    {
        win = 0;
        break;
    }
    }

    if (win == 1)
    {
        return 1;
    }

    win = 1;

    for (rows = 0; rows < size; rows++)
    {
    if (arr[rows][size - 1 - rows] != element)
    {
        win = 0;
        break;
    }
    }

    if (win == 1)
    {
        return 1;
    }

    return 0;
}

int main()
{
    int size;
    size = slot_size();
    title_of_slot_size(size);

    int arr[size][size];
    slot(size, arr);
    slot_output(size, arr);

    int element;

    int over_size = size * size;
    for (int rows = 0; rows < over_size; rows++)
    {
        if (rows % 2 == 0)
        {
            element = -1;       
        }
        else
        {
            element = -2;       
        }
        gamestart(size, arr, element);
        slot_output(size, arr);

        if (gamerule(size, arr, element))
        {
        if (element == -1)
        {
        printf("\nPlayer O won\n");
        }
        else
        {
        printf("\nPlayer X won\n");
        }

        break;
        }

        if (rows == over_size - 1)
        {
        printf("\nDraw\n");
        }
    }

return 0;
}