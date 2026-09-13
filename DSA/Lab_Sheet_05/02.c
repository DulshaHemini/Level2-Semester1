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

// Function prototypes
void initialized(stack *s);
void push(stack *s, char x);
int pop(stack *s);
int isEmpty(stack *s);
void display(stack *s);
void reverse(stack *s);

int main()
{
    stack s;

    // Initialize stack
    initialized(&s);

    // Push elements
    push(&s, 'A');
    push(&s, 'B');
    push(&s, 'C');

    printf("Original Stack:\n");
    display(&s);

    // Reverse the stack
    reverse(&s);

    printf("\nReversed Stack:\n");
    display(&s);

    return 0;
}


// Initialize empty stack
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


// Push an element into stack
void push(stack *s, char x)
{
    Node *newNode;

    // Create new node
    newNode = (Node *)malloc(sizeof(Node));

    // Store data
    newNode->Data = x;

    // New node points to current top
    newNode->Next = s->top;

    // Move top to new node
    s->top = newNode;
}


// Pop top element from stack
int pop(stack *s)
{
    Node *temp;
    char value;

    if (isEmpty(s))
    {
        printf("Stack is Empty\n");
        return -1;
    }

    // Save top node
    temp = s->top;

    // Save its data
    value = temp->Data;

    // Move top to next node
    s->top = s->top->Next;

    // Delete old top node
    free(temp);

    return value;
}


// Display stack
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


// Reverse stack
void reverse(stack *s)
{
    Node *prev;
    Node *current;
    Node *next;

    prev = NULL;
    current = s->top;

    while (current != NULL)
    {
        // Save next node
        next = current->Next;

        // Reverse current node's link
        current->Next = prev;

        // Move prev forward
        prev = current;

        // Move current forward
        current = next;
    }

    // Change top to the new first node
    s->top = prev;
}