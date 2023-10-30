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

// node *insertBegin(node *head,int x)
// {
//     node *temp = new node(x);

//     if(head == NULL)
//     {
//         temp->next = temp;
//         return temp;
//     }
//     else
//     {
//         node *curr = head;
        
//         while(curr->next != head)
//         {
//             curr = curr->next;
//         }
//         curr->next = temp;
//         temp->next= head;
//         return temp;
//     }
// }


node *insertBegin(node *head,int x)
{
    node *temp = new node(x);
    if(head == NULL)
    {
        temp->next = temp;
        return temp;
    }

    else{
        temp->next = head->next;
        head->next = temp;
        int t = head->data;
        head->data = temp->data;
        temp->data = t;
        return head;

    }
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

    head = insertBegin(head,90);

    display(head);

    return 0;
}