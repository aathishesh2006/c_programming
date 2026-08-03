#include <stdio.h>
#include <string.h>
int main()
{
 char alphabet[100] = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
 printf("%zu\n", strlen(alphabet));
 printf("%zu\n", sizeof(alphabet));

 return 0;
}