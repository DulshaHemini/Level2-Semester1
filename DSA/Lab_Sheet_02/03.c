#include <stdio.h>

#define MAX 32

int stack[MAX];
int top = -1;

void push(int value)
{
    if (top == MAX - 1)
    {
        printf("Stack Overflow\n");
        return;
    }

    top++;
    stack[top] = value;
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

int main()
{
    int decimal, remainder;

    printf("Enter a decimal number: ");
    scanf("%d", &decimal);

    while (decimal > 0)
    {
        remainder = decimal % 2;

        push(remainder);

        decimal = decimal / 2;
    }

    printf("Binary number: ");

    while (top != -1)
    {
        printf("%d", pop());
    }

    return 0;
}
