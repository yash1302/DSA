#include<iostream>
using namespace std;

struct node{
    int data;
    node *prev;
    node *next;
    node(int x)
    {
        data = x;
        prev = NULL;
        next = NULL;
    }
};


node *reverse(node *head)
{
    node *prev = NULL, *curr = head;

    while(curr != NULL)
    {
        prev = curr->prev;
        curr->prev = curr->next;
        curr->next = prev;
        curr = curr->prev;
    }

    return prev->prev;
}

void display(node *head)
{
    struct node *ptr;
    ptr = head;
    while(ptr!=NULL)
    {
        cout<<ptr->data<<" ";
        ptr = ptr->next;
    }
}

int main()
{
    node *head = new node(10);
    node *temp1 = new node(20);
    node *temp2 = new node(30);

    head->next = temp1;
    temp1->prev = head;
    temp1->next = temp2;
    temp2->prev = temp1;

    head = reverse(head);

    display(head);

    return 0;
}