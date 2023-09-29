#include<iostream>
using namespace std;

int insert(int arr[],int n,int x,int cap, int pos)
{
    if(n==cap)
    {
        return n;
    }

    int idx = pos-1;
    for(int i = n-1;i>=idx;i--)
    {
        arr[i+1]=arr[i];
    }
    arr[idx] = x;
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
    return (n+1);
}
int main()
{
    int arr[] = {1,2,4,5,6};
    int n = 5;
    int x = 3;
    int cap = 7;
    int pos = 3;
    cout<<insert(arr,n,x,cap,pos);
    return 0;
}