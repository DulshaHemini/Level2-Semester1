#include <stdio.h>
#include <stdlib.h>

struct node
{
    int data;
    struct node *next;
    struct node *prev;
} *stnode;

void DlListcreation(int n);
void displayDlList();

int main()
{
    int n;

    printf("Input the number of nodes: ");
    scanf("%d", &n);

    DlListcreation(n);

    printf("\nData entered in the doubly linked list:\n");
    displayDlList();

    return 0;
}

void DlListcreation(int n)
{
    struct node *temp, *newnode;
    int value, i;

    // Creating first node
    stnode = (struct node *)malloc(sizeof(struct node));

    printf("Input data for node 1: ");
    scanf("%d", &value);

    stnode->data = value;
    stnode->prev = NULL;
    stnode->next = NULL;

    temp = stnode;

    // Creating remaining nodes
    for (i = 2; i <= n; i++)
    {
        newnode = (struct node *)malloc(sizeof(struct node));

        printf("Input data for node %d: ", i);
        scanf("%d", &value);

        newnode->data = value;

        // Backward connection
        newnode->prev = temp;

        // New node is currently the last node
        newnode->next = NULL;

        // Forward connection
        temp->next = newnode;

        // Move temp
        temp = newnode;
    }
}

void displayDlList()
{
    struct node *temp;

    temp = stnode;

    while (temp != NULL)
    {
        printf("Data = %d\n", temp->data);

        temp = temp->next;
    }
}