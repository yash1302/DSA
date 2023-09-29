#include<iostream>
using namespace std;

void left(int arr[],int n)
{
    int temp = arr[0];
    for(int i = 1; i < n; i++)
    {
        arr[i-1]=arr[i];
    }
    arr[n-1]=temp;
}

void leftd(int arr[],int n)
{
    for(int i=0; i < 2; i++)
    {
        left(arr,n);
    }

    for(int i=0;i<n; i++)
    {
        cout << arr[i] << " ";
    }
}
int main()
{
    int arr[] = {10, 0, 6 , 0,1};
    int n = 5;
    // int d = 2;
    leftd(arr,n);
    return 0;
}
