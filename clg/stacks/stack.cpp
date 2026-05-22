#include <stdio.h>
#include <stdlib.h>

#define MAX 5

int stack[MAX];
int top = -1;

// Function to push an element onto the stack
void push()
{
    int val;
    if (top == MAX - 1)
    {
        printf("Stack Overflow\n");
    }
    else
    {
        printf("Enter the value to push: ");
        scanf("%d", &val);
        top++;
        stack[top] = val;
        printf("Value pushed onto the stack\n");
    }
}

// Function to pop an element from the stack
void pop()
{
    if (top == -1)
    {
        printf("Stack Underflow\n");
    }
    else
    {
        printf("Popped value: %d\n", stack[top]);
        top--;
    }
}

// Function to display the stack elements
void display()
{
    if (top == -1)
    {
        printf("Stack is empty\n");
    }
    else
    {
        printf("Stack elements:\n");
        for (int i = top; i >= 0; i--)
        {
            printf("%d\n", stack[i]);
        }
    }
}

// Function to peek the top element of the stack
void peek()
{
    if (top == -1)
    {
        printf("Stack is empty\n");
    }
    else
    {
        printf("Top element: %d\n", stack[top]);
    }
}

int main()
{
    int choice;
    while (1)
    {
        printf("\nStack Operations:\n");
        printf("1. Push\n");
        printf("2. Pop\n");
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
            break;
        default:
            printf("Invalid choice! Please try again.\n");
        }
    }

    return 0;
}
