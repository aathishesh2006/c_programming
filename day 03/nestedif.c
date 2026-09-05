#include <stdio.h>
int main()
{
    int studmark;
    printf("Enter your mark :   ");
    scanf("%d",&studmark);

    if(studmark >= 35){
      if(studmark >= 85)
      printf("Outstanding Performance\n");
       else if(studmark > 35)
       printf("good\n");
         else if(studmark == 35)
         printf("just pass");

    }
    
    else
    {
        if(studmark >= 18)
        printf("You are fail\n");
        else if(studmark < 10)
        printf("You should better die\n");

        return 0;
    }
}