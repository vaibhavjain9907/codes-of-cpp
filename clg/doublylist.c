#include <stdio.h>
#include <stdlib.h>

// Define structure of a Node (Doubly Linked List)
struct Node
{
    int data;
    struct Node *next;
    struct Node *prev;
};

struct Node *head = NULL;  // global head pointer

// Function to create doubly linked list
void createList(int n)
{
    struct Node *newNode, *temp;
    int data, i;
    head = NULL;

    for (i = 0; i < n; i++)
    {
        newNode = (struct Node *)malloc(sizeof(struct Node));
        printf("Enter data for node %d: ", i + 1);
        scanf("%d", &data);

        newNode->data = data;
        newNode->next = NULL;
        newNode->prev = NULL;

        if (head == NULL)
        {
            head = newNode;
            temp = head;
        }
        else
        {
            temp->next = newNode;
            newNode->prev = temp;
            temp = newNode;
        }
    }
}

// Display list forward
void display()
{
    struct Node *temp = head;
    printf("\nDoubly Linked List: ");

    while (temp != NULL)
    {
        printf("%d <-> ", temp->data);
        temp = temp->next;
    }
    printf("NULL\n");
}

// Insert at beginning
void insertAtBeginning(int data)
{
    struct Node *newNode = (struct Node *)malloc(sizeof(struct Node));
    newNode->data = data;
    newNode->next = head;
    newNode->prev = NULL;

    if (head != NULL)
        head->prev = newNode;

    head = newNode;
}

// Insert at end
void insertAtEnd(int data)
{
    struct Node *newNode = (struct Node *)malloc(sizeof(struct Node));
    struct Node *temp = head;

    newNode->data = data;
    newNode->next = NULL;
    newNode->prev = NULL;

    if (head == NULL)
    {
        head = newNode;
        return;
    }

    while (temp->next != NULL)
        temp = temp->next;

    temp->next = newNode;
    newNode->prev = temp;
}

// Insert after a given value
void insertAfterValue(int value, int data)
{
    struct Node *temp = head;
    struct Node *newNode;

    while (temp != NULL && temp->data != value)
        temp = temp->next;

    if (temp == NULL)
    {
        printf("Value %d not found.\n", value);
        return;
    }

    newNode = (struct Node *)malloc(sizeof(struct Node));
    newNode->data = data;
    newNode->next = temp->next;
    newNode->prev = temp;

    if (temp->next != NULL)
        temp->next->prev = newNode;

    temp->next = newNode;

    printf("Inserted %d after %d.\n", data, value);
}

// Delete from beginning
void deleteFromBeginning()
{
    if (head == NULL)
    {
        printf("List is empty!\n");
        return;
    }

    struct Node *temp = head;
    head = head->next;

    if (head != NULL)
        head->prev = NULL;

    printf("Deleted %d from beginning.\n", temp->data);
    free(temp);
}

// Delete from end
void deleteFromEnd()
{
    if (head == NULL)
    {
        printf("List is empty!\n");
        return;
    }

    struct Node *temp = head;

    // Only 1 node
    if (temp->next == NULL)
    {
        printf("Deleted %d from end.\n", temp->data);
        free(temp);
        head = NULL;
        return;
    }

    while (temp->next != NULL)
        temp = temp->next;

    printf("Deleted %d from end.\n", temp->data);
    temp->prev->next = NULL;
    free(temp);
}

// Delete by value
void deleteNode(int value)
{
    struct Node *temp = head;

    while (temp != NULL && temp->data != value)
        temp = temp->next;

    if (temp == NULL)
    {
        printf("Value not found!\n");
        return;
    }

    if (temp->prev != NULL)
        temp->prev->next = temp->next;
    else
        head = temp->next;

    if (temp->next != NULL)
        temp->next->prev = temp->prev;

    printf("Deleted node with value %d.\n", value);
    free(temp);
}

// Main function
int main()
{
    int n, choice, data, value;

    printf("Enter number of nodes: ");
    scanf("%d", &n);

    createList(n);
    display();

    while (1)
    {
        printf("\n--- MENU ---\n");
        printf("1. Insert at Beginning\n");
        printf("2. Insert at End\n");
        printf("3. Insert After a Given Value\n");
        printf("4. Delete from Beginning\n");
        printf("5. Delete from End\n");
        printf("6. Delete by Value\n");
        printf("7. Display List\n");
        printf("8. Exit\n");
        printf("Enter choice: ");
        scanf("%d", &choice);

        switch (choice)
        {
        case 1:
            printf("Enter data: ");
            scanf("%d", &data);
            insertAtBeginning(data);
            break;
        case 2:
            printf("Enter data: ");
            scanf("%d", &data);
            insertAtEnd(data);
            break;
        case 3:
            printf("Enter value after which to insert: ");
            scanf("%d", &value);
            printf("Enter data: ");
            scanf("%d", &data);
            insertAfterValue(value, data);
            break;
        case 4:
            deleteFromBeginning();
            break;
        case 5:
            deleteFromEnd();
            break;
        case 6:
            printf("Enter value to delete: ");
            scanf("%d", &value);
            deleteNode(value);
            break;
        case 7:
            display();
            break;
        case 8:
            exit(0);
        default:
            printf("Invalid choice!\n");
        }
    }

    return 0;
}
