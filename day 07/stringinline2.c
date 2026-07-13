#include <stdio.h>
int main()
{
    char car_name[] = "Supra";
    int length = sizeof(car_name)/sizeof(car_name[0]);

    int i;
    for(i = 0; i < length; i++){
        printf("%c\n", car_name[i]);
    }
    return 0;
}