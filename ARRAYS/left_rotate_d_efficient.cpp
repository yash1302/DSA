#include<iostream>
using namespace std;

void reverse(int arr[],int low,int high)
{
    while(low < high)
    {
        swap(arr[low],arr[high]);
        low++;
        high--;
    }
}

void left(int arr[],int n,int d)
{
    reverse(arr,0,d-1);
    reverse(arr,d,n-1);
    reverse(arr,0,n-1);

    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
}
int main()
{
    int arr[] = {10, 0, 6 , 0,1};
    int n = 5;
    // int d = 2;
    left(arr,n,2);
    return 0;
}