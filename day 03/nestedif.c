#include <stdio.h>
int main()
{
    int studmark;
    printf("Enter your mark :   ");
    scanf("%d",&studmark);

    if(studmark >= 35){
      if(studmark >= 85)
      printf("Outstanding Performance\n");
       else if(studmark >= 35)
       printf("good\n");
         else
         printf("just pass");

    }
    
    else
    {
        printf("You are fail\n");
        if(studmark >= 18)
        printf("You are bad");
        else
        printf("You should better die\n");

        return 0;
    }
}