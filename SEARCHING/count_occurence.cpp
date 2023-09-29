#include<iostream>
using namespace std;

int first(int arr[],int n,int x)
{
    int low = 0,high = n-1;
    while(low<=high)
    {
        int mid = (low+high) / 2;
        if(arr[mid] > x)
        {
            high = mid -1;
        }
        else if(arr[mid] < x)
        {
            low = mid + 1;
        }
        else
        {
            if(mid == 0 || arr[mid-1] != arr[mid])
            {
                return mid;
            }
            else{
                high = mid-1;
            }
        }
    }
    return -1;
}

int last(int arr[],int n,int x)
{
    int low = 0,high = n-1;
    while(low<=high)
    {
        int mid = (low+high) / 2;
        if(arr[mid] > x)
        {
            high = mid -1;
        }
        else if(arr[mid] < x)
        {
            low = mid + 1;
        }
        else
        {
            if(mid == n-1 || arr[mid] != arr[mid+1])
            {
                return mid;
            }
            else{
                low = mid+1;
            }
        }
    }
    return -1;
}

int occur(int arr[],int n,int x)
{
    int firstoccur = first(arr,n,x);

    if(firstoccur == -1)
    {
        return 0;
    }

    else
    {
        return(last(arr,n,x) - firstoccur +1);
    }
}


int main()
{
    int arr[] = {10,10,10};
    int n = 3;
    int x = 10;
    cout<<occur(arr,n,x);
    return 0;
}