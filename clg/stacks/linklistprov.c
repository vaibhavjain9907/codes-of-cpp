#include <stdio.h>
#include <stdlib.h>

// Define structure of a Node
struct Node
{
    int data;
    struct Node *next;
};

struct Node *head = NULL; // global head pointer

// Function to create linked list
void createList(int n)
{
    struct Node *newNode, *temp;
    int data, i;
    head = NULL; // initially empty
    for (i = 0; i < n; i++)
    {
        newNode = (struct Node *)malloc(sizeof(struct Node));
        printf("Enter data for node %d: ", i + 1);
        scanf("%d", &data);
        newNode->data = data;
        newNode->next = NULL;

        if (head == NULL)
        {
            head = newNode;
            temp = head;
        }
        else
        {
            temp->next = newNode;
            temp = newNode;
        }
    }
}

// Function to display the linked list
void display()
{
    struct Node *temp = head;
    printf("\nLinked List: ");
    while (temp != NULL)
    {
        printf("%d -> ", temp->data);
        temp = temp->next;
    }
    printf("NULL\n");
}

// Insert at beginning
void insertAtBeginning(int data)

{/ 
    struct Node *newNode = (struct Node *)malloc(sizeof(struct Node));
    newNode->data = data;
    newNode->next = head;
    head = newNode;
}

// Insert at end
void insertAtEnd(int data)
{
    struct Node *newNode, *temp;
    newNode = (struct Node *)malloc(sizeof(struct Node));
    newNode->data = data;
    newNode->next = NULL;

    if (head == NULL)
    {
        head = newNode;
        return;
    }
    temp = head;
    while (temp->next != NULL)
        temp = temp->next;

    temp->next = newNode;
}

// Insert after a given value (between nodes)
void insertAfterValue(int value, int data)
{
    struct Node *newNode, *temp;
    temp = head;

    while (temp != NULL && temp->data != value)
        temp = temp->next;

    if (temp == NULL)
    {
        printf("Value %d not found in the list.\n", value);
        return;
    }

    newNode = (struct Node *)malloc(sizeof(struct Node));
    newNode->data = data;
    newNode->next = temp->next;
    temp->next = newNode;

    printf("Inserted %d after %d successfully.\n", data, value);
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

    struct Node *temp = head, *prev = NULL;

    if (head->next == NULL)
    .
    { // only one node
        printf("Deleted %d from end.\n", head->data);
        free(head);
        head = NULL;
        return;
    }

    while (temp->next != NULL)
    {
        prev = temp;
        temp = temp->next;
    }

    printf("Deleted %d from end.\n", temp->data);
    prev->next = NULL;
    free(temp);
}

// Delete a node by value
void deleteNode(int value)
{
    struct Node *temp = head, *prev = NULL;

    if (temp != NULL && temp->data == value)
    {
        head = temp->next;
        free(temp);
        printf("Deleted node with value %d.\n", value);
        return;
    }

    while (temp != NULL && temp->data != value)
    {
        prev = temp;
        temp = temp->next;
    }

    if (temp == NULL)
    {
        printf("Value not found!\n");
        return;
    }

    prev->next = temp->next;
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
        printf("3. Insert After a Given Value (Between Nodes)\n");
        printf("4. Delete from Beginning\n");
        printf("5. Delete from End\n");
        printf("6. Delete a Node by Value\n");
        printf("7. Display List\n");
        printf("8. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice)
        {
        case 1:
            printf("Enter data to insert at beginning: ");
            scanf("%d", &data);
            insertAtBeginning(data);
            break;
        case 2:
            printf("Enter data to insert at end: ");
            scanf("%d", &data);
            insertAtEnd(data);
            break;
        case 3:
            printf("Enter value after which to insert: ");
            scanf("%d", &value);
            printf("Enter data to insert: ");
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
