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

void display(node *head)
{
    if(head==NULL)
    {
        cout<<"empty"<<" ";
    }

    cout<<head->data<<" ";

    for(node *ptr = head->next;ptr!=head;ptr=ptr->next)
    {
        cout<<ptr->data<<" ";
    }
}

int main()
{
    node *head = new node(10);
    node *temp = new node(20);
    node *temp2 = new node(30);

    head -> next = temp;
    temp ->next = temp2;
    temp2->next = head;

    display(head);

    return 0;
}