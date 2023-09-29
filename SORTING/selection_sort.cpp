#include<iostream>
using namespace std;

void sel_sort(int arr[],int n)
{
    for(int i=0; i<n; i++)
    {
        int min_idx = i;
        for(int j=i+1; j<n;j++)
        {
            if(arr[j]<arr[min_idx])
            {
                min_idx = j;
            }
        }
        swap(arr[min_idx],arr[i]);
    }
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
}
int main()
{
    int arr[]={10,5,8,20,2,18};
    int n = 6;
    sel_sort(arr,n);
    return 0;
}