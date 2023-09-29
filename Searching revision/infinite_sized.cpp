#include<iostream>
using namespace std;

int binarySearch(int arr[],int low,int high,int x)
{
    
    while(low<high)
    {
    int mid = (low+high)/2;

    if(arr[mid]==x)
    {
        return mid;
    }
    else if(arr[mid]>x)
    {
        high = mid-1;
    }
    else
    {
        low = mid+1;
    }
    }
    return -1;
}

int infinite(int arr[],int x)
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
    else {
        return binarySearch(arr,i/2+1,i,x);
    }
}

int main()
{
    int arr[] = {1,2,3,4};
    int x = 2;
    cout<<infinite(arr,x)<<endl;
    return 0;
}