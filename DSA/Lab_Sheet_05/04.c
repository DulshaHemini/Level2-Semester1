#include <stdio.h>
#include <stdlib.h>

typedef struct node
{
    int data;
    struct node *prev;
    struct node *next;
} node;

node *stnode;

void DlListcreation(int n);
void displayDlList();

int main()
{
    int n;

    printf("Enter the number of nodes: ");
    scanf("%d", &n);

    DlListcreation(n);

    printf("\nAfter Creating nodes:\n");
    displayDlList();

    return 0;
}

void DlListcreation(int n)
{
    node *temp, *newnode;
    int i, value;

    // Create first node
    stnode = (node *)malloc(sizeof(node));

    // continue here
    printf("Enter data for node 1: ");
    scanf("%d", &value);

    stnode->data=value;
    stnode->prev=NULL;
    stnode->next=NULL;

    temp=stnode;

    for (i = 2; i <= n; i++)
    {
        newnode = (node *)malloc(sizeof(node));

        printf("Enter data for node %d: ", i);
        scanf("%d", &value);

        newnode->data = value;

        newnode->prev = temp;
        newnode->next = NULL;

        temp->next = newnode;

        temp = newnode;
    }
}

void displayDlList()
{
    node *temp;

    temp = stnode;

    while (temp != NULL)
    {
        printf("Data = %d\n", temp->data);
        temp = temp->next;
    }
}