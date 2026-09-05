#include <stdio.h>
int main()
{
    int day = 3;

    switch (day){

        case 1:
        printf("sunday\n");
        break;

        case 2:
        printf("monday\n");
        break;

        case 3:
        printf("tuesday\n");
        break;

        case 4:
        printf("wednesday\n");
        break;

        case 5:
        printf("thursday\n");
        break;

        case 6:
        printf("friday\n");
        break;

        case 7:
        printf("saturday\n");
        break;

        default:
        printf("no day is available\n");

    }

        int var = 41;
        int flag = 20;

        var = flag ==  61 ? 1 : 2;
        printf("the largest number is : %d\n",var);

    

    return 0;

}