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

node *delNode(node *head)
{
    if(head == NULL)
    {
        return NULL;
    }

    else
    {
        node *temp = head->next;
        delete head;
        return temp;
    }
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

    display(head);

    cout<<endl;
    head = delNode(head);

    display(head);

    cout<<endl;
    head = delNode(head);
    
    display(head);

    cout<<endl;
    head = delNode(head);
    
    display(head);


    return 0;
}