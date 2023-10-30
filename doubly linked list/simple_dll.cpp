#include<iostream>
using namespace std;

struct node{
    int data;
    node *prev;
    node *next;
    node (int d)
    {
        data = d;
        next = NULL;
        prev = NULL;
    }
};

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
    node *head = new node(30);
    node *temp1 = new node(20);
    node *temp2 = new node(10);

    head->next = temp1;
    temp1->prev = head;
    temp1->next = temp2;
    temp2->prev = temp1;

    display(head);
    return 0;
}