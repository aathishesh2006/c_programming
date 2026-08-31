#include <stdio.h>
#include <stdlib.h>

struct node
{
    int data;
    struct node *next;
};

int main()
{
    struct node *head = NULL;
    struct node *second = NULL;
    struct node *third = NULL;

        head = (struct node *)malloc(sizeof(struct node));
        second = (struct node *)malloc(sizeof(struct node));
        third = (struct node *)malloc(sizeof(struct node));

        if(!head || !second|| !third)
        {
            printf("Memory allocation failed\n");
            return 1;
        }

        head->data = 10;
        head->next = second;

        second->data = 20;
        second->next = third;

        third->data = 30;
        third->next = NULL;

        struct node *temp = head;
        while(temp != NULL)
        {
            printf("%d -> ", temp->data);
            temp = temp->next;
        }
        printf("NULL\n");

        temp = head;
        while(temp != NULL)
        {
            struct node *next =  temp->next;

            free(temp);
            temp = next;
        }

        return 0;
}