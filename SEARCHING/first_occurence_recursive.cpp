#include<iostream>
using namespace std;

int first(int arr[],int low,int high,int x)
{
    if(low>high)
    {
        return -1;
    }

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
        if(arr[mid] == 0 || arr[mid-1]!= arr[mid])
        {
            return mid;
        }
        else
        {
            return first(arr,low,mid-1,x);
        }
    }
}
int main()
{
    int arr[] = {10,10,10};
    int low = 0;
    int high = 2;
    int x = 10;
    cout<<first(arr,low,high,x);
    return 0;
}