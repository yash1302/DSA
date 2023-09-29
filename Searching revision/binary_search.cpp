#include<iostream>
using namespace std;

int binary_search(int arr[],int n,int x)
{
    int low = 0,high = n-1;
    while(low<=high)
    {
        int mid = (low+high)/2;

        if(arr[mid]==x)
        {
            return mid+1;
        }

        else if(arr[mid]>x)
        {
            high = mid-1;
        }

        else{
            low = mid+1;
        }
    }
    return -1;
}

int main()
{
    int arr[] = {1,2,3,4,5};
    int n = 5;
    int x = 2;
    cout<<binary_search(arr,n,x);
    return 0;
}