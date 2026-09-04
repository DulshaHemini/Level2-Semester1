#include <stdio.h>
#include <stdlib.h>
#define SIZE 5

int cQueue[SIZE];
int front = -1;
int rear = -1;

void enQueue(int value);
void deQueue();
void display();

int main()
{
    int choice, value;
    while (1)
    {
        printf("\n\n****** MENU ******\n");
        printf("1. Insert\n");
        printf("2. Delete\n");
        printf("3. Display\n");
        printf("4. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice)
        {
            case 1:
                printf("\nEnter the value to be inserted: ");
                scanf("%d", &value);
                enQueue(value);
                break;
            case 2:
                deQueue();
                break;
            case 3:
                display();
                break;
            case 4:
                exit(0);
            default:
                printf("\nPlease select the correct choice!\n");
        }
    }
    return 0;
}

void enQueue(int value)
{
    // Check whether queue is full
    if ((front == 0 && rear == SIZE - 1) ||
        (front == rear + 1))
    {
        printf("\nCircular Queue is Full!");
        return;
    }
    // If rear reaches the end, move it to beginning
    if (rear == SIZE - 1 && front != 0)
    {
        rear = -1;
    }
    rear++;
    cQueue[rear] = value;
    
    // First element
    if (front == -1)
    {
        front = 0;
    }
    printf("\nInsertion Success!");
}

void deQueue()
{
    // Check whether queue is empty
    if (front == -1)
    {
        printf("\nCircular Queue is Empty!");
        return;
    }
    printf("\nDeleted element: %d", cQueue[front]);

    // If only one element exists
    if (front == rear)
    {
        front = -1;
        rear = -1;
    }
    else
    {
        front++;

        // Wrap front around
        if (front == SIZE)
        {
            front = 0;
        }
    }
}

void display()
{
    int i;
    if (front == -1)
    {
        printf("\nCircular Queue is Empty!");
        return;
    }
    printf("\nCircular Queue Elements:\n");

    i = front;

    // Case 1: No wrap-around
    if (front <= rear)
    {
        while (i <= rear)
        {
            printf("%d\t", cQueue[i]);
            i++;
        }
    }

    // Case 2: Wrap-around
    else
    {
        while (i < SIZE)
        {
            printf("%d\t", cQueue[i]);
            i++;
        }
        i = 0;
        while (i <= rear)
        {
            printf("%d\t", cQueue[i]);
            i++;
        }
    }

    printf("\n");
}
