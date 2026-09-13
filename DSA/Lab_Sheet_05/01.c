//implement stack and queue data structures using linked list.
#include <stdio.h>
#include <stdlib.h>

typedef struct Node
{
    char Data;
    struct Node *Next;
} Node;

typedef struct
{
    Node *top;
} stack;

void initialized(stack *s);
void push(stack *s, char x);
int pop(stack *s);
int isEmpty(stack *s);
void display(stack *s);

int main()
{
    stack s;

    initialized(&s);

    push(&s, 'A');
    push(&s, 'B');
    push(&s, 'C');

    printf("Stack elements:\n");
    display(&s);

    printf("\nPopped element: %c\n", pop(&s));

    printf("\nStack after pop:\n");
    display(&s);

    return 0;
}

// Create an empty stack
void initialized(stack *s)
{
    s->top = NULL;
}

// Check whether stack is empty
int isEmpty(stack *s)
{
    if (s->top == NULL)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}

// Add an element
void push(stack *s, char x)
{
    Node *newNode;

    newNode = (Node *)malloc(sizeof(Node));

    newNode->Data = x;
    newNode->Next = s->top;

    s->top = newNode;
}

// Remove the top element
int pop(stack *s)
{
    Node *temp;
    char value;

    if (isEmpty(s))
    {
        printf("Stack is Empty\n");
        return -1;
    }

    temp = s->top;
    value = temp->Data;

    s->top = s->top->Next;

    free(temp);

    return value;
}

// Display all elements
void display(stack *s)
{
    Node *temp;

    if (isEmpty(s))
    {
        printf("Stack is Empty\n");
        return;
    }

    temp = s->top;

    while (temp != NULL)
    {
        printf("%c\n", temp->Data);
        temp = temp->Next;
    }
}