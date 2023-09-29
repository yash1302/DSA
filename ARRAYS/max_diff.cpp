#include<iostream>
using namespace std;

int max_diff(int arr[],int n)
{
        int ans = arr[1] - arr[0];
    for(int i = 0; i < n; i++)
    {
        for(int j = i+1;j<n;j++)
        {
            ans = max(ans,arr[j]-arr[i]);
        }

    }
        return ans; 
}
int main()
{
    int arr[] = {10,20,30};
    int n = 3;
    cout << max_diff(arr,n);
    return 0;
}