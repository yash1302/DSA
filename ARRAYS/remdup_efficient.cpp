#include<iostream>
using namespace std;

void remdup(int arr[],int n)
{
    int res = 1;
    for(int i=0;i<n;i++)
    {
        if(arr[i]!=arr[res-1])
        {
            arr[res]=arr[i];
            res++;
        }
    }
    for(int i=0;i<res;i++)
    {
        cout<<arr[i]<<" ";
    }
}
int main()
{
    int arr[] = {10, 9, 6 , 1,1};
    int n = 5;
    remdup(arr,n);
    return 0;
}