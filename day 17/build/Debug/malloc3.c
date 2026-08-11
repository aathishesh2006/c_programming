#include <stdio.h>
#include <stdlib.h>
int main()
{
int *arr;
int n;

printf("Enter size: ");
scanf("%d", &n);

arr = malloc(n * sizeof(int));

return 0;
}