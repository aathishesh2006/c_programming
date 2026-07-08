# include <stdio.h>
int main()
{
    int total_item = 24;
    float cost_per_item = 5.6;
    float total_cost = total_item * cost_per_item; 
    char currency = '$';

    printf("number of total item : = %d\n");
    printf("cost per item : = %.2f%c\n", cost_per_item, currency);
    printf("Total Bill : = %.5f%c", total_cost,currency);

    return 0;
}