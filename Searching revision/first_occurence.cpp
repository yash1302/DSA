#include<iostream>
using namespace std;

int first(int arr[],int low,int high,int x)
{
    int mid = (low+high)/2;

    if(arr[mid]>x)
    {
        return first(arr,low,mid-1,x);
    }
    else if(arr[mid]<x)
    {
        return first(arr,mid+1,high,x);
    }
    else
    {
        if(mid == 0 || arr[mid-1]!=arr[mid])
        {
            return mid+1;
        }
        else
        {
            return first(arr,low,mid-1,x);
        }
    }
}

int main()
{
    int arr[] = {1,1,2,2,2,3,3,3};
    int low = 0;
    int high=7;
    int x = 2;
    cout<<first(arr,low,high,x);
    return 0;
}