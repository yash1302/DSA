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

node *delHead(node *head)
{
    if(head==NULL)
    {
        return NULL;
    }

    if(head->next == NULL)
    {
        delete head;
        return NULL;
    }

    head->data = head->next->data;
    node *temp = head->next;
    head->next = head->next->next;
    delete temp;
    return head;

}

node *delK(node *head,int k)
{
    if(head==NULL)
    {
        return NULL;
    }

    if(k==1)
    {
        return delHead(head);
    }

    node *curr = head;

    for(int i=0;i<k-2;i++)
    {
        curr = curr->next;
    }

    node *temp = curr->next;
    curr->next = curr->next->next;
    delete temp;
    return head;
}

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

    head = delK(head,2);

    display(head);
    return 0;
}