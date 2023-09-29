#include<iostream>
using namespace std;

void move(int arr[],int n)
{
    int temp[n];
    for(int i = 0; i < n; i++)
    {
        if(arr[i] == 0)
        {
           for(int j = i+1;j<n;j++)
           {
            if(arr[j] != 0)
            {
                swap(arr[i],arr[j]);
            }
           }
        }
    }
    for(int i = 0; i < n; i++)
    {
        cout<<arr[i]<<" ";
    }
}
int main()
{
    int arr[] = {10, 0, 6 , 0,1};
    int n = 5;
    move(arr,n);
    return 0;
}