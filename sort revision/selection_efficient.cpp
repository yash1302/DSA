#include<iostream>
using namespace std;

void selection(int arr[],int n)
{
    for(int i=0;i<n;i++)
    {
        int min = i;
        for(int j = i+1;j<n;j++)
        {
            if(arr[j]<arr[min])
            {
                min = j;
            }
        }
        swap(arr[min],arr[i]);
    }

    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
}

int main()
{
    int arr[] = {2,1,5,3,4};
    int n = 5;

    selection(arr,n);
    return 0;
}