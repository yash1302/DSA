#include <iostream>
using namespace std;

struct node
{
    int data;
    node *next;
    node(int x)
    {
        data = x;
        next = NULL;
    }
};

void nth(node *head, int n)
{
    int len = 0;
    if (head == NULL)
    {
        return;
    }

    for (node *curr = head; curr != NULL; curr = curr->next)
    {
        len++;
    }

    if (len < n)
    {
        return;
    }

    node *curr = head;
    for (int i = 0; i < (len - n ); i++)
    {

        curr = curr->next;
    }

    cout << curr->data;
}

node *insertbegin(node *head, int x)
{
    node *temp = new node(x);
    temp->next = head;
    return temp;
}

void display(node *head)
{
    struct node *ptr;
    ptr = head;

    while (ptr != NULL)
    {
        cout << ptr->data << " ";
        ptr = ptr->next;
    }
}

int main()
{
    node *head = NULL;
    head = insertbegin(head, 10);
    head = insertbegin(head, 20);
    head = insertbegin(head, 30);
    head = insertbegin(head, 40);

    display(head);

    cout << endl;

    nth(head,2);

    return 0;
}