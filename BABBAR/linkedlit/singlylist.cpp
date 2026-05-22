#include <iostream>
using namespace std;
class node
{
public:
    int data;
    node *next;
    node(int data)
    {
        this->data = data;
        this->next = NULL;
    }
};
void insrtathead(node &head, int d)
{
    node *temp = new node(d);
    temp->next = head;
    head = temp;
}
void print(node *&head)
{
    while (head != NULL)
    {
        node *temp = head;
        cout << temp->data << " ";
        temp = temp->next;
    }
}
int main()
{
    node *node1 = new node(10);
    // cout << node1->data << endl;
    // cout << node1->next << endl;
    node *head = node1;
    insrtathead(head, 12);
    print(head);
}