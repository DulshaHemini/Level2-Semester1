#include <stdio.h>
#include <stdlib.h>

typedef struct node
{
    int data;
    struct node *next;
} node;

typedef struct
{
    node *front;
    node *rear;
} queue;

void initialized(queue *q);
int isEmpty(queue *q);
void enqueue(queue *q, int a);
int dequeue(queue *q);
void display(node *head);

int main()
{
    queue q;

    initialized(&q);

    enqueue(&q, 10);
    enqueue(&q, 20);
    enqueue(&q, 30);

    printf("Queue elements: ");
    display(q.front);

    printf("Dequeued element: %d\n", dequeue(&q));

    printf("Queue after dequeue: ");
    display(q.front);

    return 0;
}

void initialized(queue *q)
{
    q->front = NULL;
    q->rear = NULL;
}

int isEmpty(queue *q)
{
    if (q->front == NULL)
        return 1;
    else
        return 0;
}

void enqueue(queue *q, int a)
{
    node *newNode;

    newNode = (node *)malloc(sizeof(node));

    newNode->data = a;
    newNode->next = NULL;

    if (isEmpty(q))
    {
        q->front = newNode;
        q->rear = newNode;
    }
    else
    {
        q->rear->next = newNode;
        q->rear = newNode;
    }
}

int dequeue(queue *q)
{
    node *temp;
    int value;

    if (isEmpty(q))
    {
        printf("Queue is Empty\n");
        return -1;
    }

    temp = q->front;
    value = temp->data;

    q->front = q->front->next;

    if (q->front == NULL)
    {
        q->rear = NULL;
    }

    free(temp);

    return value;
}

void display(node *head)
{
    node *temp;
    temp = head;

    while (temp != NULL)
    {
        printf("%d ", temp->data);
        temp = temp->next;
    }

    printf("\n");
}