#include<iostream>
using namespace std;

struct node{
    int data;
    node *next;
    node (int x)
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

    int count = 0;
    node *curr;

    for(curr = head;curr!= NULL;curr = curr->next)
    {
        count++;
    }

    curr = head;

    for(int i=0;i<count/2;i++)
    {
        curr = curr->next;
    }

    cout<<curr->data;

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

    middle(head);

    // display(head);
    return 0;
}