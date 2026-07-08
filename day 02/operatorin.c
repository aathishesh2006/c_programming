#include <stdio.h>
int main()
{
    int box6 = 83+99;
    int box7 = box6+36;
    int box8 = box7+box8;

    printf("%d\n", box6);
    printf("%d\n", box7);
    printf("%d\n", box8);

    int x = 6;
    int y = 6;

    printf("%d\n", x+y);
     printf("%d\n", x-y);
      printf("%d\n", x*y);
       printf("%d\n", x%y);
        printf("%d\n", ++y);
         printf("%d\n", --x);
    

    double e = 6.5;
    double f = 5.5;
     printf("%f\n", e / f);


    int peopleinroom = 0;

    peopleinroom++;
    peopleinroom++;
    peopleinroom++;
    peopleinroom++;
    peopleinroom++;

    printf("%d\n", peopleinroom);

    peopleinroom--;

    printf("%d\n",peopleinroom);

    int fry = 66;
    fry += 5;
    printf("%d\n",fry);

    int w = 95;
    w &= 83;
    printf("%d\n", w);

    return 0;

}