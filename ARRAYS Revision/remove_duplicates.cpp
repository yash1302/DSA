#include<iostream>
using namespace std;

void rem_dup(int arr[],int n)
{
    int temp[n];
    temp[0] = arr[0];
    int res = 1;
    for(int i=1;i<n;i++)
    {
        if(temp[res-1] != arr[i])
        {
            temp[res] = arr[i];
            res++;
        }
    }
    for(int i=0;i<n;i++)
    {
        arr[i] = temp[i];
    }
    for(int i=0;i<res;i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    cout<<res;
}
int main()
{
    int arr[] = {1,2,3,4,4,5};
    int n = 6;
    rem_dup(arr,n);
    return 0;
}