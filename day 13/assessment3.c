# include <stdio.h>
int main()
{
    int core = 5;

    for(int i = 1; i <= core; i++)
    {
        for(int j = 0; j < core - i; j++)
        {
            (" ");
        }
            for(int k = 0; k < i; k++)
            {
            printf(" *");
            }
        printf("\n");
        }
    return 0;
}

