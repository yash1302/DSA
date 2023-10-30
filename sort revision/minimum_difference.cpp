#include<iostream>
using namespace std;

int difference(int arr[],int n)
{
    sort(arr,arr+n);
    int res = INT16_MAX;

    for(int i=1;i<n;i++)
    {
        res = min(res,(arr[i]-arr[i-1]));
    }

    return res;

    // for (int i = 0; i < n; i++)
    // {
    //     cout<<arr[i]<<" ";
    // }
    
    
    
}

int main()
{
    int arr[] = {10,3,20,12};
    int n = 4;
    cout<<difference(arr,n)<<endl;
    return 0;
}