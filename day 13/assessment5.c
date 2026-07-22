# include <stdio.h>
int main()
{
    int core = 5;

    for(int i = 1; i <= core; i++)
    {
        for(int j = 1; j < core - i; j++)
        {
            (" ");
        }
            for(int k = 1; k < i; k++) 
            {
            printf(" *");
            }
        printf("\n");
        }

    int google = 5;

    for(int i = 0; i < google; i++)
    {
        for(int j = 0; j < i; j++)
        {
            (" ");
        }
            for(int k = 0; k < google - i; k++)
            {
            printf(" *");
            }
        printf("\n");
        }
    return 0;
}
