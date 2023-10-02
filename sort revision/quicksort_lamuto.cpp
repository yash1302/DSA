#include<iostream>
using namespace std;

int partition(int arr[],int low,int high)
{
    int pivot = arr[high];
    int i = low-1;

    for(int j=low;j<=high-1;j++)
    {
        if(arr[j]<pivot)
        {
            i++;
            swap(arr[i],arr[j]);
        }
    }

    swap(arr[i+1],arr[high]);
    return (i+1);
}

void quickSort(int arr[],int low,int high)
{
    if(low<high)
    {
        int p = partition(arr,low,high);
        quickSort(arr,low,p-1);
        quickSort(arr,p+1,high);
    }
}

void display(int arr[],int n)
{
    for(int i=0;i<n;i++)
    {
        cout << arr[i] <<" ";
    }
}

int main()
{
    int arr[] = {8,4,7,9,3,10,5};
    int low = 0;
    int high = 6;
    int n = 7;
    // cout<<"hello world";

    quickSort(arr, low, high);
    display(arr,n);
    return 0;
}