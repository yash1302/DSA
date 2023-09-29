#include<iostream>
using namespace std;


void selection(int arr[],int n)
{
    int temp[n];

    for(int i=0;i<n;i++)
    {
        int min_idx = 0;
        for(int j=1;j<n;j++)
        {
            if(arr[j]<arr[min_idx])
            {
                min_idx = j;
            }
        }

        temp[i] = arr[min_idx];
        arr[min_idx] = INFINITY;
    }

    for(int i=0;i<n;i++)
    {
        arr[i] = temp[i]; 
    }

    for(int i=0;i<n;i++)
    {
        cout<<temp[i]<<" ";
    }
}


int main()
{
    int arr[] = {2,1,5,4,3};
    int n = 5;

    selection(arr,n);
    return 0;
}