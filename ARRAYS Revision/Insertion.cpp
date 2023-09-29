#include<iostream>
using namespace std;

void insertion(int arr[],int n,int pos,int key,int cap)
{
    if(n==cap)
    {
        cout<<"cannot insert";
    }

    int idx = pos-1;
    for(int i = n-1;i>=idx;i--)
    {
        arr[i+1]=arr[i];
    }
    
    arr[idx] = key;
    n = n+1;
    for(int i=0;i<n;i++)
    {
        cout<< arr[i]<<" ";
    }
    cout<<endl;
}
int main()
{
    int arr[] = {1,2,3,4};
    int n = 4;
    int cap = 6;
    int key = 5;
    int pos = 3;

    insertion(arr,n,pos,key,cap);
    return 0;
}