#include<stdio.h>
int main()
{
    int num[] ={4 ,5, 6, 7};
    int i;

    for(i =0; i<4; i++)
    {
        printf("the format number is: %d\n", num[i]);
    }

    int box[] = {20, 40, 80, 160};
    int sizecalculator = sizeof(box)/sizeof(box[0]);
    
    for(int select = 0; select < sizecalculator; select++)
    {
        printf("In the box of numbers are : %d\n", box[select]);
    }


    return 0;
}