#include <stdio.h>

#define MAX 10

int stack[MAX];
int top = -1;

void push(int item)
{
    if (top == MAX - 1)
    {
        printf("Stack Overflow\n");
        return;
    }

    stack[++top] = item;
}

int pop()
{
    if (top == -1)
    {
        printf("Stack Underflow\n");
        return -1;
    }

    return stack[top--];
}

void insertAtBottom(int item)
{
    int temp;

    if (top == -1)
    {
        push(item);
        return;
    }

    temp = pop();

    insertAtBottom(item);

    push(temp);
}

void reverseStack()
{
    int temp;

    if (top == -1)
    {
        return;
    }

    temp = pop();

    reverseStack();

    insertAtBottom(temp);
}

void display()
{
    int i;

    printf("Stack: ");

    for (i = top; i >= 0; i--)
    {
        printf("%d ", stack[i]);
    }

    printf("\n");
}

int main()
{
    push(9);
    push(8);
    push(4);
    push(2);

    printf("Original stack:\n");
    display();

    reverseStack();

    printf("Reversed stack:\n");
    display();

    return 0;
}
