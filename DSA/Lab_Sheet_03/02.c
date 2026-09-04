#include <stdio.h>
#include <stdlib.h>
#define MAX 5

int queue_array[MAX];
int front = -1;
int rear = -1;

void enqueue(int element);
int dequeue();
int isEmpty();
int isFull();
int peek();
void display();

int main()
{
    int option;
    int element;

    while (1)
    {
        printf("\n\n1. Insert Element in Queue");
        printf("\n2. Delete Element from Queue");
        printf("\n3. Display All the Elements of Queue");
        printf("\n4. Display Element at the Front position");
        printf("\n5. Exit");
        printf("\n\nEnter your option: ");
        scanf("%d", &option);

        switch (option)
        {
            case 1:
                printf("Enter element: ");
                scanf("%d", &element);
                enqueue(element);
                break;
            case 2:
                element = dequeue();
                if (element != -1)
                    printf("Deleted element: %d", element);
                break;

            case 3:
                display();
                break;
            case 4:
                element = peek();

                if (element != -1)
                    printf("Front element: %d", element);
                break;
            case 5:
                exit(0);
            default:
                printf("Invalid option!");
        }
    }
    return 0;
}

void enqueue(int element)
{
    if (isFull())
    {
        printf("Queue Overflow!");
        return;
    }
    if (front == -1)
    {
        front = 0;
    }
    rear++;
    queue_array[rear] = element;
    printf("%d inserted into queue.", element);
}


int dequeue()
{
    int element;
    if (isEmpty())
    {
        printf("Queue Underflow!");
        return -1;
    }
    element = queue_array[front];
    if (front == rear)
    {
        front = -1;
        rear = -1;
    }
    else
    {
        front++;
    }
    return element;
}

int isEmpty()
{
    if (front == -1)
        return 1;
    else
        return 0;
}

int isFull()
{
    if (rear == MAX - 1)
        return 1;
    else
        return 0;
}

int peek()
{
    if (isEmpty())
    {
        printf("Queue is empty!");
        return -1;
    }

    return queue_array[front];
}


void display()
{
    int i;
    if (isEmpty())
    {
        printf("Queue is empty!");
        return;
    }
    printf("Queue elements: ");
    for (i = front; i <= rear; i++)
    {
        printf("%d ", queue_array[i]);
    }
}


