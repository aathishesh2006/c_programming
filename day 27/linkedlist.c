#include <stdio.h>
#include <stdlib.h>

struct node
{
    int data;
    struct node *next;
};

struct node *createnode(int value)
{
    struct node *newnode;
    newnode = malloc(sizeof(struct node));

    if(newnode == NULL)
    {
        printf("Memory allocation failed \n");
        exit(1);
    }

    newnode->data = value;
    newnode->next = NULL;

    return newnode;
}

struct node *createlist()
{
    struct node *head = NULL;
    struct node *temp = NULL;
    struct node *newnode = NULL;

    int n;
    int value;

    printf("Enter the number of node :");
    scanf("%d", &n);

    for(int i=0; i<n; i++)
    {
        printf("Enter the value of the node %d: ", i + 1);
        scanf("%d", & value);

        newnode = createnode(value);

        if(head == NULL)
        {
            head = newnode;
            temp = newnode;
        }

        else 
        {
            temp->next = newnode;
            temp = newnode;
        }
    }

    return head;
}

void displaylist(struct node *head)
{
    struct node *temp;

    temp = head;
    printf("\nLinked list:\n");

    while (temp != NULL)
    {
        printf("%d ->", temp->data);
        temp = temp->next;
    }
    printf("NULL\n");
}

int main()
{
    struct node *head = NULL;

    head  = createlist();
    displaylist(head);

    return 0;
}