#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n;
    int *marks;
    int total = 0;
    float average;
    int highest, lowest;

    printf("Enter number of students: ");
    scanf("%d", &n);

    marks = calloc(n, sizeof(int));
    
    if (marks == NULL)
    {
    printf("Memory allocation failed\n");
    return 1;
    }

    printf("\nEnter marks for %d students:\n", n);

    for (int i = 0; i < n; i++)
    {
    printf("Student %d: ", i + 1);
    scanf("%d", &marks[i]);
    }
    highest = marks[0];
    lowest = marks[0];

    for (int i = 0; i < n; i++)
    {
    total = total + marks[i];

    if (marks[i] > highest)
    {
    highest = marks[i];
    }

    if (marks[i] < lowest)
    {
    lowest = marks[i];
    }
    }
    average = (float)total / n;

    printf("\n--- Result ---\n");

    printf("Marks: ");

    for (int i = 0; i < n; i++)
    {
    printf("%d ", marks[i]);
    }

    printf("\nTotal Marks: %d", total);
    printf("\nAverage: %.2f", average);
    printf("\nHighest Mark: %d", highest);
    printf("\nLowest Mark: %d\n", lowest);
    free(marks);

    return 0;
}