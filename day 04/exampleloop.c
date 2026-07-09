#include <stdio.h>
int main()
{
    for(int i=0; i<5; i++)
    {
        if(i==3)
        {
        break;
        }
    printf("%d",i);
    printf("\n");
    
    for(int j=0; j< 5; j++)
    {
        if(j==3)
        {
            continue;
        }
        printf("%d",j);
    }
    printf("\n");
    }

    return 0;
}



