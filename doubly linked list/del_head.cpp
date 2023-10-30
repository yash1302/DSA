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

node *del_head(node *head)
{
    if(head == NULL)
    {
        return NULL;
    }

    if(head->next == NULL)
    {
        delete head;
        return NULL;
    }
    else
    {
        node *temp = head;
        head = head->next;
        head->prev = NULL;
        delete temp;
        return head;
    }
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

    head = del_head(head);
    display(head);

    return 0;
}