#include <stdio.h>
#include <stdlib.h>
#define n 8

int main()
{
    int queue[n];
    int front = 0;
    int rear = 0;
    int choice;
    int item;
    printf("Queue using Array\n");
    do
    {
        printf("\n1. Enqueue");
        printf("\n2. Dequeue");
        printf("\n3. Display");
        printf("\n4. Exit");
        printf("\n\nEnter the Choice: ");
        scanf("%d", &choice);
        
        switch (choice)
        {
            case 1:
                // Enqueue
                if (rear == n)
                {
                    printf("Queue Overflow\n");
                }
                else
                {
                    printf("Enter item: ");
                    scanf("%d", &item);
                    queue[rear] = item;
                    rear++;
                    printf("%d inserted into queue\n", item);
                }
                break;

            case 2:
                // Dequeue
                if (front == rear)
                {
                    printf("Queue Underflow\n");
                }
                else
                {
                    item = queue[front];
                    front++;
                    printf("Removed item: %d\n", item);
                }
                break;

            case 3:
                // Display
                if (front == rear)
                {
                    printf("Queue is empty\n");
                }
                else
                {
                    printf("Queue: ");
                    for (int i = front; i < rear; i++)
                    {
                        printf("%d ", queue[i]);
                    }

                    printf("\n");
                }
                break;
            case 4:
                exit(0);
            default:
                printf("Wrong Choice\n");
        }

    } while (choice != 4);

    return 0;
}
