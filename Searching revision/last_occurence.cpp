#include<iostream>
using namespace std;

int last(int arr[],int n,int x)
{
    int low = 0,high = n-1;
    while(low<=high)
    {
        int mid = (low+high)/2;
        if(arr[mid]>x)
        {
            high = mid-1;
        }
        else if(arr[mid]<x)
        {
            low = mid+1;
        }
        else
        {
            if(mid==0 || arr[mid+1]!=arr[mid])
            {
                return mid;
            }
            else
            {
                low = mid+1;
            }
        }
    }
    return -1;
}
int main()
{
    int arr[] = {1,2,3,3,3};
    int n = 5;
    int x = 3;
    cout<<last(arr,n,x);
    return 0;
}