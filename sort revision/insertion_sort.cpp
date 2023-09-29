#include<iostream>
using namespace std;

void insertion(int arr[],int n)
{
    for(int i=1;i<n;i++)
    {
        int key = arr[i];
        int j = i-1;
        while(j>=0 && arr[j]>key)
        {
           arr[j+1] = arr[j];
           j--; 
        }
        
        arr[j+1] = key;
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
    insertion(arr , n);
    return 0;
}