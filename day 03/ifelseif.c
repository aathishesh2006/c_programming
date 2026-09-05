#include <stdio.h>
int main()
{
    int arun = 2;
    if(arun>=18)
    printf("you are now elligible");
    else if(arun<=10 || arun<=15)
    printf("you are not elligable");
    else if(arun<=6 || arun<=9)
    printf("grow and come");
    else 
    printf("you are a kid lol");

    return 0;
}