#include <stdio.h>
#include <stdlib.h>

#define Max 5

struct stack {
    int arr[Max];
    int top;
} st;

void push();
void pop();
void display();

int main() {
    int choice;

    st.top = -1;

    do {
        printf("\n\n\t1. Push an element into stack");
        printf("\n\t2. Pop an element from stack");
        printf("\n\t3. Display the elements of stack");
        printf("\n\t4. Exit");
        printf("\n\n\tEnter your choice: ");
        scanf("%d", &choice);

        switch (choice) {

            case 1:
                push();
                break;

            case 2:
                pop();
                break;

            case 3:
                display();
                break;

            case 4:
                exit(0);

            default:
                printf("\n\tWrong entry! Try again.");
        }

    } while (choice != 4);

    return 0;
}

void push() {
    int item;

    if (st.top == Max - 1) {
        printf("\n\tStack Overflow!");
    }
    else {
        printf("\n\tEnter the element to push: ");
        scanf("%d", &item);

        st.top++;
        st.arr[st.top] = item;

        printf("\n\t%d pushed into the stack.", item);
    }
}

void pop() {

    if (st.top == -1) {
        printf("\n\tStack Underflow! Stack is empty.");
    }
    else {
        int item;

        item = st.arr[st.top];
        st.top--;

        printf("\n\tThe popped element is: %d", item);
    }
}

void display() {

    if (st.top == -1) {
        printf("\n\tStack is empty.");
    }
    else {
        printf("\n\tThe contents of the stack are:\n");

        for (int i = st.top; i >= 0; i--) {
            printf("\t%d\n", st.arr[i]);
        }
    }
}
