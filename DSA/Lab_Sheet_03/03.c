#include <stdio.h>
#define MAX 5

typedef struct
{
    int bufferID;
    int capacity;
    int items;
} bufferschedule;

bufferschedule queue[MAX];
int front = -1;
int rear = -1;


// Insert into queue
void enqueue(bufferschedule b)
{
    if (rear == MAX - 1)
    {
        printf("Queue Overflow\n");
        return;
    }
    if (front == -1)
    {
        front = 0;
    }
    rear++;
    queue[rear] = b;
    printf("Buffer inserted successfully.\n");
}


// Remove from queue
bufferschedule dequeue()
{
    bufferschedule b = {-1, -1, -1};
    if (front == -1)
    {
        printf("Queue Underflow\n");
        return b;
    }
    b = queue[front];
    if (front == rear)
    {
        front = -1;
        rear = -1;
    }
    else
    {
        front++;
    }
    return b;
}


// Display queue
void display()
{
    int i;
    if (front == -1)
    {
        printf("Queue is empty.\n");
        return;
    }
    printf("\nBuffer Queue:\n");
    for (i = front; i <= rear; i++)
    {
        printf("Buffer ID: %d\n", queue[i].bufferID);
        printf("Capacity: %d\n", queue[i].capacity);
        printf("Number of Items: %d\n\n", queue[i].items);
    }
}


int main()
{
    bufferschedule b;
    
    // Insert first buffer
    b.bufferID = 101;
    b.capacity = 100;
    b.items = 40;
    enqueue(b);

    // Insert second buffer
    b.bufferID = 102;
    b.capacity = 200;
    b.items = 80;
    enqueue(b);

    // Insert third buffer
    b.bufferID = 103;
    b.capacity = 150;
    b.items = 60;
    enqueue(b);

    // Display queue
    display();

    return 0;
}
