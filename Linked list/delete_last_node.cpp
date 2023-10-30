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

node *delLast(node *head)
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

    node *curr = head;
    while(curr->next->next != NULL)
    {
        curr = curr->next;
    }
    curr->next = NULL;

    return head;

}

void display(node *head)
{
    struct node *ptr;
    ptr = head;

    while(ptr != NULL)
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

    head = delLast(head);
    cout<<endl;
    display(head);
    return 0;
}