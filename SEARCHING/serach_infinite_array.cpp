#include<iostream>
using namespace std;

int binarySearch(int arr[],int low,int high,int x)
{
    if(low>high)
    {
        return -1;
    }
    
    int mid = (low+high)/2;
    if(mid == x)
    {
        return mid;
    }
    else if(mid > x)
    {
        return binarySearch(arr,low,mid-1,x);
    }
    else
    {
        return binarySearch(arr,mid+1,high,x);
    }
}

int search(int arr[],int x)
{
    if(arr[0]==x)
    {
        return 0;
    }
    int i = 1;
    while(arr[i]<x)
    {
        i = i*2;
    }

    if(arr[i]==x)
    {
        return i;
    }

    return binarySearch(arr,i/2+1,i-1,x);
}
int main()
{
    int arr[]={10,20,30,50,80,100,200,300,700};
    int x = 80;

    cout<<search(arr,x);
    return 0;
}