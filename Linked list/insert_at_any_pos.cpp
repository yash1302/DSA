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

node *insertNode(node *head,int pos,int data)
{
    node *temp = new node(data);
    if(pos==1)
    {
        temp->next = head;
        return temp;
    }

    node *curr = head;

    for(int i=1;i<pos-1 && curr!= NULL;i++)
    {
        curr = curr->next;
    }

    if(curr==NULL)
    {
        return head;
    }

    temp->next = curr->next;
    curr->next = temp;

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
    node * head = new node(10);
    node *temp1 = new node(20);
    node *temp2 = new node(30);


    head->next = temp1;
    temp1->next = temp2;

    display(head);

    cout<<endl;

    head = insertNode(head,3,25);

    display(head);

    return 0;
}