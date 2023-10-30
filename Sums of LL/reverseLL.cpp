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

// naive soln
// node *reverse(node *head)
// {
//     vector<int> arr;
//     for(node*curr = head;curr!=NULL;curr=curr->next)
//     {
//         arr.push_back(curr->data);
//     }
//     for(node*curr = head;curr!=NULL;curr=curr->next)
//     {
//         curr->data = arr.back();
//         arr.pop_back();
//     }
//     return head;
    
// }


// efficient

node *reverse(node *head)
{
    node *curr = head;
    node *prev = NULL;
    while(curr!=NULL)
    {
        node *next = curr->next;
        curr->next = prev;
        prev = curr;
        curr = next;
    }
    return prev;
}

node *insertbegin(node *head, int x)
{
    node *temp = new node(x);
    temp->next = head;
    return temp;
}

void display(node *head)
{
    struct node *ptr;
    ptr = head;

    while (ptr != NULL)
    {
        cout << ptr->data << " ";
        ptr = ptr->next;
    }
}



int main()
{
node *head = NULL;
    head = insertbegin(head, 10);
    head = insertbegin(head, 20);
    head = insertbegin(head, 30);
    head = insertbegin(head, 40);

    display(head);

    cout << endl;

    head = reverse(head);

    display(head);

    return 0;
}