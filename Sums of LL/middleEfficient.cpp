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

void middle(node *head)
{
    if(head==NULL)
    {
        return;
    }

    node *slow = head,*fast = head;

    while(fast!= NULL && fast->next != NULL)
    {
        slow = slow->next;
        fast = fast->next->next;
    }

    cout<<slow->data;
}

node *insertbegin(node *head,int x)
{
    node *temp = new node(x);
    temp->next = head;
    return temp;
}

void display(node *head)
{
    struct node *ptr;
    ptr = head;

    while(ptr!=NULL)
    {
        cout<< ptr->data<<" ";
        ptr = ptr ->next;

    }
}

int main()
{
    node *head=NULL;
    head = insertbegin(head,10);
    head = insertbegin(head,20);
    head = insertbegin(head,30);
    head = insertbegin(head,40);


   display(head); 

    cout<<endl;

    middle(head);
    return 0;
}