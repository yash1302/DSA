#include<iostream>
using namespace std;

void lamuto(int arr[],int low,int high)
{
    int pivot = arr[high];
    int i=low-1;

    for(int j=low;j<=high-1;j++)
    {
        if(arr[j]< pivot)
        {
            i++;
            swap(arr[i],arr[j]);
        }
    }
    swap(arr[i+1],arr[high]);
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
    int arr[] = {10,80,30,90,40,50,70};
    int low = 0;
    int high = 6;
    int n = 7;
    lamuto(arr,low,high);
    display(arr,n);
    return 0;
}