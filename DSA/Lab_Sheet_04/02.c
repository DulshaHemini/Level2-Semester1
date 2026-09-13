#include <stdio.h>
#include <stdlib.h>

struct node
{
    int data;
    struct node *nextptr;
} *stnode;

void createNodeList(int n);
void displayList();
void FindElement(int value);
void NodeInsertatBegin(int num);
void NodeInsertatEnd(int num);
int NodeCount();
void insertNodeAtMiddle(int num, int pos);
void FirstNodeDeletion();

int main()
{
    int n = 3, value, pos;

    createNodeList(n);

    printf("\nInitial List:\n");
    displayList();

    printf("\nEnter value to search: ");
    scanf("%d", &value);
    FindElement(value);

    printf("\nEnter value to insert at beginning: ");
    scanf("%d", &value);
    NodeInsertatBegin(value);

    printf("\nList after inserting at beginning:\n");
    displayList();

    printf("\nEnter value to insert at end: ");
    scanf("%d", &value);
    NodeInsertatEnd(value);

    printf("\nList after inserting at end:\n");
    displayList();

    printf("\nNumber of nodes = %d\n", NodeCount());

    printf("\nEnter value to insert in middle: ");
    scanf("%d", &value);

    printf("Enter position: ");
    scanf("%d", &pos);

    insertNodeAtMiddle(value, pos);

    printf("\nList after inserting in middle:\n");
    displayList();

    printf("\nDeleting first node...\n");

    FirstNodeDeletion();

    printf("\nList after deleting first node:\n");
    displayList();

    printf("\nNumber of nodes = %d\n", NodeCount());

    return 0;
}

void createNodeList(int n)
{
    struct node *temp, *newnode;
    int num, i;

    stnode = (struct node *)malloc(sizeof(struct node));

    printf("Input data for node 1: ");
    scanf("%d", &num);

    stnode->data = num;
    stnode->nextptr = NULL;

    temp = stnode;

    for (i = 2; i <= n; i++)
    {
        newnode = (struct node *)malloc(sizeof(struct node));

        printf("Input data for node %d: ", i);
        scanf("%d", &num);

        newnode->data = num;
        newnode->nextptr = NULL;

        temp->nextptr = newnode;
        temp = newnode;
    }
}

void displayList()
{
    struct node *temp;

    temp = stnode;

    while (temp != NULL)
    {
        printf("Data = %d\n", temp->data);
        temp = temp->nextptr;
    }
}

void FindElement(int value)
{
    struct node *temp;

    temp = stnode;

    while (temp != NULL)
    {
        if (temp->data == value)
        {
            printf("Element %d found\n", value);
            return;
        }

        temp = temp->nextptr;
    }

    printf("Element %d not found\n", value);
}

void NodeInsertatBegin(int num)
{
    struct node *newnode;

    newnode = (struct node *)malloc(sizeof(struct node));

    newnode->data = num;
    newnode->nextptr = stnode;

    stnode = newnode;
}

void NodeInsertatEnd(int num)
{
    struct node *temp, *newnode;

    newnode = (struct node *)malloc(sizeof(struct node));

    newnode->data = num;
    newnode->nextptr = NULL;

    temp = stnode;

    while (temp->nextptr != NULL)
    {
        temp = temp->nextptr;
    }

    temp->nextptr = newnode;
}

int NodeCount()
{
    struct node *temp;
    int count = 0;

    temp = stnode;

    while (temp != NULL)
    {
        count++;
        temp = temp->nextptr;
    }

    return count;
}

void insertNodeAtMiddle(int num, int pos)
{
    struct node *temp, *newnode;
    int i;

    newnode = (struct node *)malloc(sizeof(struct node));
    newnode->data = num;

    temp = stnode;

    for (i = 1; i < pos - 1; i++)
    {
        temp = temp->nextptr;
    }

    newnode->nextptr = temp->nextptr;
    temp->nextptr = newnode;
}

void FirstNodeDeletion()
{
    struct node *temp;

    if (stnode == NULL)
    {
        printf("List is Empty\n");
        return;
    }

    temp = stnode;

    stnode = stnode->nextptr;

    free(temp);
}