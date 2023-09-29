#include<iostream>
using namespace std;



void reverse(int arr[],int low, int high)
{
    while(low<high)
    {
        swap(arr[low],arr[high]);
        low++;
        high--;
    }
}
void left_rotate(int arr[],int n,int d)
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
    int arr[] = {1,2,3,4,5};
    int n = 5;
    int d = 2;
    left_rotate(arr,n,d);
    return 0;
}