#include<iostream>
using namespace std;


void move(int arr[], int n)
{
    int res = 0;
    for(int i=0; i<n; i++)
    {
        if(arr[i] != 0)
        {
            swap(arr[i], arr[res]);
            res++;
        }
    }

    for(int i=0; i<n; i++)
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