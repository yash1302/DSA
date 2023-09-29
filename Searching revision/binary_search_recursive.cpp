#include<iostream>
using namespace std;

int binary_search(int arr[],int low,int high,int x)
{
    if(low>high)
    {
        return -1;
    }


    int mid = (low+high)/2;

    if(arr[mid]==x)
    {
        return mid+1;
    }

    else if(arr[mid]>x)
    {
        return binary_search(arr,low,mid-1,x);
    }
    else
    
       return binary_search(arr,mid+1,high,x);
    
    
}

int main()
{
    int arr[] = {1,2,3,4,5};
    int low = 0;
    int high = 4;
    int x = 2;
    cout<<binary_search(arr,low,high,x);

    return 0;
}