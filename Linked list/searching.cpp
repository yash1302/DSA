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

int search(node *head,int x)
{
    node *curr = head;
    int pos = 1;
    while(curr!=NULL)
    {
        if(curr->data == x)
        {
            return pos;
        }
        else
        {
            pos = pos+1;
            curr = curr->next;
        }
    }
    return -1;
}

int main()
{
    node *head = new node(10);
    node *temp = new node(20);
    node *temp1 = new node(30);

    head->next = temp;
    temp->next = temp1;

    cout<<search(head,20);
;    return 0;
}