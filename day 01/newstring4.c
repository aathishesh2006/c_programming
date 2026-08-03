#include <stdio.h>
#include <string.h>
int main()
{
  char word1[20] = {"Aathishesh"};
    char word2[20] = {"Arunkrishnan"};
      char word3[20] = {"harish"};
            char word4[20] = {"manikandan"};


            printf("To compare the two character of array: %d\n", strcmp(word1,word2));
                 printf("To compare the two character of array: %d\n", strcmp(word1,word3));
                        printf("To compare the two character of array: %d\n", strcmp(word1,word4));
                            printf("To compare the two character of array: %d\n", strcmp(word2,word3));
                                printf("To compare the two character of array: %d\n", strcmp(word2,word4));
                                    printf("To compare the two character of array: %d\n", strcmp(word3,word4));

return 0;
}