#include<iostream>
using namespace std;

struct node{
    int data;
    node *next;
    node(int x)
    {
        data = x;
        next = NULL;
    }
};

void rem(node *head)
{
    node *curr = head;
    while(curr!= NULL && curr->next != NULL)
    {
        if(curr->data == curr->next->data)
        {
            node *temp = curr->next;
            curr->next = curr->next->next;
            delete(temp);
        }
        else
        {
            curr = curr->next;
        }
    }
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
    head = insertbegin(head, 20);
    head = insertbegin(head, 40);

    display(head);

    cout << endl;

    rem(head);


    display(head);
    return 0;
}