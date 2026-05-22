#include <iostream>
#include <stdlib.h>

using namespace std;
#define SIZE 5
int quque[SIZE];
int front = -1, rear = -1;
void insertion(int deque[], int n, int &front, int &rear, int element)
{
    cin >> element;
    if (front == 0 && rear == n - 1 || front == rear + 1)
    {
        cout << ("deque overflow");
    }
    else
    {
        if (front == -1)
        {
            front = rear = 0;
        }
        else
        {
            rear = (rear + 1) % n;
        }
        deque[rear] = element;
    }
}
void deletion(int deque[], int n, int front, int rear)
{
    if (rear == -1 && front == -1 || front == rear)
    {
        cout << ("Queue Underflow");
    }
    else
    {

        cout << "deleted" << deque[front] << endl;
    }
}

int main()
{
    int choice, element;
    while (1)
    {
        cout << "1. Insertion \n2. Deletion \n3. Print \n4. Exit \n";
        cin >> choice;

        switch (choice)
        {
        case 1:
        {
            cout << "Enter element: ";
            insertion(quque, SIZE, front, rear, element);
            break;
        }
        case 2:
        {
            deletion(quque, SIZE, front, rear);
            break;
        }
        case 3:
        {
            if (front == -1)
            {
                cout << "Queue is empty\n";
            }
            else
            {
                cout << "Queue elements: ";
                int i = front;
                while (true)
                {
                    cout << quque[i] << " ";
                    if (i == rear)
                        break;
                    i = (i + 1) % SIZE;
                }
                cout << endl;
            }
            break;
        }
        case 4:
        {
            exit(0);
        }
        default:
            cout << "Invalid choice\n";
        }
    }
}