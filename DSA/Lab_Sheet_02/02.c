#include <stdio.h>

#define MAX 3

typedef struct
{
    int TOP;
    int ele[MAX];
} Stack;

// Initialize stack
void init(Stack *s)
{
    s->TOP = -1;
}

// Check whether stack is full
int isFull(Stack *s)
{
    if (s->TOP == MAX - 1)
        return 0;
    else
        return -1;
}

// Check whether stack is empty
int isEmpty(Stack *s)
{
    if (s->TOP == -1)
        return 0;
    else
        return -1;
}

// Push an element into stack
void push(Stack *s, int item)
{
    if (!isFull(s))
    {
        printf("\nStack is full");
        return;
    }

    s->TOP = s->TOP + 1;
    s->ele[s->TOP] = item;
}

// Pop an element from stack
int pop(Stack *s, int *item)
{
    if (!isEmpty(s))
    {
        printf("\nStack is empty");
        return -1;
    }

    *item = s->ele[s->TOP];
    s->TOP = s->TOP - 1;

    return 0;
}

// Main function
int main()
{
    Stack s;
    int item;

    init(&s);

    push(&s, 10);
    push(&s, 20);
    push(&s, 30);

    pop(&s, &item);
    printf("\nPopped Item : %d", item);

    pop(&s, &item);
    printf("\nPopped Item : %d", item);

    pop(&s, &item);
    printf("\nPopped Item : %d", item);

    return 0;
}
