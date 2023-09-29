#include<iostream>
using namespace std;

void leader(int arr[],int n)
{
    int cur_id = arr[n-1];
    cout<<cur_id<<" ";
    for(int i=n-2;i>=0;i--)
    {
        if(cur_id<arr[i])
        {
            cur_id=arr[i];
            cout<<cur_id<<" ";
        }
    }
}
int main()
{
    int arr[] = {10, 0, 6 , 0,1};
    int n = 5;
    leader(arr,n);
    return 0;
}