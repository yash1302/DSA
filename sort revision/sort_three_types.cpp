#include<iostream>
using namespace std;

void sortThree(int arr[],int n)
{
    int low = 0,mid = 0,high = n-1;

    while(mid<=high)
    {
        if(arr[mid]==0)
        {
            swap(arr[low],arr[mid]);
            low++;
            mid++;
        }
        else if(arr[mid]==1)
        {
            mid++;
        }
        else
        {
            swap(arr[mid],arr[high]);
            high--;
        }
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
    int arr[] = {0,2,1,2,2,0};
    int n = 6;

    sortThree(arr,n);
    display(arr,n);
    return 0;
}