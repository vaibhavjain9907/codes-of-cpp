#include <stdio.h>
#include <stdlib.h>
#define MAX 100

int queue[MAX];
int front = -1;
int rear = -1;

void push()
{
    int val;
    if (rear == MAX - 1)
    {
        printf("Queue Overflow\n");
    }
    else
    {
        printf("Enter the value to push: ");
        scanf("%d", &val);
        if (front == -1)
            front = 0;
        rear++;
        queue[rear] = val;
        printf("Value pushed into the queue\n");
    }
}

void pop()
{
    if (front == -1 || front > rear)
    {
        printf("Queue Underflow (empty)\n");
    }
    else
    {
        printf("Popped value: %d\n", queue[front]);
        front++;
    }
}

void display()
{
    if (front == -1 || front > rear)
    {
        printf("Queue is empty\n");
    }
    else
    {
        printf("Queue elements:\n");
        for (int i = front; i <= rear; i++)
        {
            printf("%d ", queue[i]);
        }
        printf("\n");
    }
}

void peek()
{
    if (front == -1 || front > rear)
    {
        printf("Queue is empty\n");
    }
    else
    {
        printf("Front element: %d\n", queue[front]);
    }
}

int main()
{
    int choice;
    while (1)
    {
        printf("\nQueue Operations:\n");
        printf("1. Push (Enqueue)\n");
        printf("2. Pop (Dequeue)\n");
        printf("3. Display\n");
        printf("4. Peek\n");
        printf("5. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice)
        {
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
            peek();
            break;
        case 5:
            exit(0);
        default:
            printf("Invalid choice! Please try again.\n");
        }
    }

    return 0;
}
