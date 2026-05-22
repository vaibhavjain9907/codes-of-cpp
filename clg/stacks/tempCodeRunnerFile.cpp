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