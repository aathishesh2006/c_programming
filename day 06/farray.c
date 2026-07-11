#include <stdio.h>
int main()
{
    int person_ages[] = {40, 43, 78, 98, 31, 90, 07, 41};
    int n = sizeof(person_ages)/sizeof(person_ages[0]);

    float sum, avg=0;

    for(int i=0; i<n; i++)
    {
        sum += person_ages[i];
    }
    avg = sum/n;
    printf("the peoples are have average ages :%.2f\n", avg);

    return 0;
}