#include<iostream>
using namespace std;

void partition(int arr[],int low,int high,int p)
{
    int index = 0;
    int temp[high-low+1];

    for(int i=low;i<=high;i++)
    {
        if(arr[i]<=arr[p])
        {
            temp[index] = arr[i];
            index++;
        }
    }

    for(int i=low;i<=high;i++)
    {
        if(arr[i]>arr[p])
        {
            temp[index] = arr[i];
            index++;
        }
    }

    for(int i=low;i<=high;i++)
    {
        arr[i] = temp[i-low];
    }
}

void display(int arr[],int n)
{
    for (int i = 0; i < n; i++)
    {
        cout<<arr[i]<<" ";
    }
    
}

int main()
{
    int arr[] = {3,8,6,12,10,7};
    int low = 0;
    int high = 5;
    int p = 5;
    int n = high+1;

    partition(arr, low, high,p);
    display(arr,n);
    return 0;
}