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

// node *delHead(node *head)
// {
//     if(head==NULL)
//     {
//         return NULL;
//     }

//     if(head->next == NULL)
//     {
//         delete head;
//         return NULL;
//     }

//     else
//     {
//         node *curr = head;
//         while(curr->next != head)
//         {
//             curr = curr->next;
//         }

//         curr->next = head->next;
//         delete head;
//         return (curr->next);
//     }
// }


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

    head = delHead(head);

    display(head);
    return 0;
}