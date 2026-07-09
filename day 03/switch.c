#include <stdio.h>
int main()
{
    int day = 8;

    switch (day){

        case 1:
        printf("sunday");
        break;

        case 2:
        printf("monday");
        break;

        case 3:
        printf("tuesday");
        break;

        case 4:
        printf("wednesday");
        break;

        case 5:
        printf("thursday");
        break;

        case 6:
        printf("friday");
        break;

        case 7:
        printf("saturday");
        break;

        default:
        printf("no day is available");

    }

        int var = 41;
        int flag = 20;

        var = flag ==  61 ? 1 : 2;
        printf("the largest number is : %d\n",var);

    

    return 0;

}