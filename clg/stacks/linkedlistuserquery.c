#include <stdio.h>
#include <stdlib.h>
struct node
{
    int data;
    struct node *next;
};
struct node *newnode = NULL, *head = NULL, *temp = NULL;
void inserionatbeginning(int data)
{
    struct node *newnode = (struct node *)malloc(sizeof(struct node));
    newnode->data = data;
    newnode->next = head;
    head = newnode;
}
void insertionatlast(int data )
{
    struct node *newnode = (struct node *)malloc(sizeof(struct node));
    temp = head;
    while (temp != NULL)
    {
        temp->next = newnode;
    }
}
void insertionatmid(int data, int val)
{
    struct node *newnode = (struct node *)malloc(sizeof(struct node));
    temp = head;
    while (temp->data != val)
    {
        newnode->data = data;
        temp = temp->next;
        newnode->next = temp->next;
        temp->next = newnode;
    }
}
void deletefrombeginning(){
    head = 
}
int main() {
    int n, choice, data, value;

    printf("Enter number of nodes: ");
    scanf("%d", &n);
    createList(n);
    display();

    while (1) {
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

        switch (choice) {
            case 1:
                printf("Enter data to insert at beginning: ");
                scanf("%d", &data);
                insertatbeginning(data);
                break;
            case 2:
                printf("Enter data to insert at end: ");
                scanf("%d", &data);
                insertatend(data);
                break;
            case 3:
                printf("Enter value after which to insert: ");
                scanf("%d", &value);
                printf("Enter data to insert: ");
                scanf("%d", &data);
                insertionatmid(value, data);
                break;
            case 4:
                deletefrombeginning();
                break;
            case 5:
                deletefromend();
                break;
            case 6:
                printf("Enter value to delete: ");
                scanf("%d", &value);
                deletenode(value);
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
