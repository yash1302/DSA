#include<iostream>
using namespace std;

struct node{
    int data;
    node *next;
    node (int x)
    {
        data = x;
        next = NULL;
    }
};

void nth(node *head,int n)
{
    if(head == NULL)
    {
        return;
    }

    node *first = head;

    for(int i=0;i<n;i++)
    {
        if(first==NULL)
        {
            return;
        }
        first = first->next;
    }

    node *second = head;

    while(first!=NULL)
    {
        second = second->next;
        first = first->next;
    }

    cout<<second->data;
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