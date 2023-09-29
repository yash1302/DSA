#include<iostream>
using namespace std;

int rotated(int arr[],int n,int x)
{
    int low = 0,high = n-1;
    while(low<=high)
    {
        int mid = (low+high)/2;

        if(arr[mid]==x)
        {
            return mid;
        }

        if(arr[low]<arr[mid])
        {
            if(x>arr[low] && x<arr[mid])
            {
                high = mid-1;
            }
            else
            {
                low = mid+1;
            }
        }
        else
        {
            if(x>arr[mid] && x<=arr[high])
            {
                low = mid+1;
            }
            else
            {
                high = mid-1;
            }
        }
    }

    return -1;
}

int main()
{
    int arr[] = {3,4,5,6,1,2};
    int n = 6;
    int x = 1;
    cout<<rotated(arr,n,x);
    return 0;
}