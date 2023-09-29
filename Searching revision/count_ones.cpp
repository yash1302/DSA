#include<iostream>
using namespace std;

int count_ones(int arr[],int n)
{
    int low = 0,high = n-1;

    int mid = (low+high)/2;

    if(arr[mid]==0)
    {
        low = mid+1;
    }

    else 
    {
        if(arr[mid] == 1||arr[mid-1]!=arr[mid])
        {
            return n-mid;
        }
        else
        {
            high = mid-1;
        }
    }
    return 0;
}

int main()
{
    int arr[] = {0,0,1,1,1,1};
    int n = 6;
    cout<<count_ones(arr,n);

    return 0;
}