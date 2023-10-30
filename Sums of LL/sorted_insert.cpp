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

node *sort_insert(node *head,int x)
{
    node *temp = new node(x);

    if(head == NULL)
    {
        return temp;
    }

    if(x < head->data)
    {
        temp->next = head;
        return temp;
    }

    node *curr = head;

    while(curr->next != NULL && curr->next->data < x)
    {
        curr = curr->next;
    }

    temp->next = curr->next;
    curr->next = temp;
    return head;
}

void display(node *head)
{
    struct node *ptr;
    ptr = head;

    while(ptr != NULL)
    {
        cout<<ptr->data<<" ";
        ptr = ptr -> next;
    }
}

int main()
{
    node * head = new node(10);
    node *temp1 = new node(20);
    node *temp2 = new node(30);


    head->next = temp1;
    temp1->next = temp2;

    head = sort_insert(head,15);

    display(head);

    return 0;
}