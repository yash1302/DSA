#include<iostream>
using namespace std;

int last(int arr[],int low,int high,int x,int n)
{
    if(low>high)
    {
        return -1;
    }
    int mid = (low+high)/2;

    if(arr[mid]>x)
    {
        return last(arr,low,mid-1,x,n);
    }

    else if(arr[mid]<x)
    {
        return last(arr,mid+1,high,x,n);
    }
    else
    {
        if(mid==n-1 || arr[mid] != arr[mid+1])
        {
            return mid;
        }
        else
        {
            return last(arr,mid+1,high,x,n);
        }
    }
}
int main()
{
    int arr[] = {10,10,10};
    int low = 0;
    int high = 2;
    int x = 10;
    int n=3;
    cout<<last(arr,low,high,x,n);
    return 0;
}