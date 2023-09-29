#include<iostream>
using namespace std;

void remduplicate(int arr[],int n)
{
    int temp[n];
    int res = 1;
    temp[0] = arr[0];
    for (int i = 1; i < n; i++)
    {
        if(temp[res-1]!=arr[i])
        {
            temp[res]=arr[i];
            res++;
        }
    }
    for(int i=0;i<n;i++)
    {
        arr[i] = temp[i];
    }
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
}
int main()
{
    int arr[] = {10, 9, 6 , 1,1};
    int n = 5;
    remduplicate(arr,n);
    return 0;
}