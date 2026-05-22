#include <stdio.h>
#include <stdlib.h>
struct node
{
    int data;
    struct node *next;
};
int main()
{
    struct node *head = NULL;
    struct node *first = NULL;
    struct node *second = NULL;

    head = (struct node *)malloc(sizeof(struct node));
    first = (struct node *)malloc(sizeof(struct node));
    second = (struct node *)malloc(sizeof(struct node));

    head->data = 10;
    head->next = first;
    first->data = 20;
    first->next = second;
    second->data = 30;
    second->next = NULL;

    struct node *temp = head;
    while (temp != NULL)
    {
        printf("%d-> ", temp->data);
        temp = temp->next;
    }
    printf("NULL");

    return 0;
}
