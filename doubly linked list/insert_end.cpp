#include<iostream>
using namespace std;

struct node{
    int data;
    node *next;
    node *prev;
    node(int x)
    {
        data = x;
        next = NULL;
        prev = NULL;
    }
};

node *insertend(node *head,int x)
{
    node *temp = new node(x);

    if(head == NULL)
    {
        temp->next = head;
        return temp;
    }

    node *curr = head;

    while(curr->next != NULL)
    {
        curr = curr->next;
    }

    curr->next = temp;
    temp->prev = curr;
    return head;
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
    node *head = new node(30);
    node *temp1 = new node(20);
    node *temp2 = new node(10);

    head->next = temp1;
    temp1->prev = head;
    temp1->next = temp2;
    temp2->prev = temp1;

    head = insertend(head,40);

    display(head);


    return 0;
}