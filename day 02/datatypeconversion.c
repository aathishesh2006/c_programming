#include <stdio.h>
int main()
{
    int x = 4;
    int y = 8;
    int sum = 78/2;
    printf( "%d\n", sum );
     
    float myFloat = 67;
    printf("%f\n", myFloat );

    int myInt = 7.69;
    printf("%d\n", myInt);

    float mySuperFloat = (float) 79 / 3;
    printf("%f\n", mySuperFloat);

    int t = 5;
    int p = 2;
    float range = (float) t/p;
    printf("%f\n", range);

    int ruff = 95;
    int detr = 5;

    float thedol = (float) ruff/detr;
    printf("%.3f\n", thedol);


    int high_score = 500;
    int player_score = 423;
    float new_high_score =(float) player_score/high_score * 100;
    printf("user percentage is : %.2f\n", new_high_score);

    return 0;
}