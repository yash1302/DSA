#include<iostream>
using namespace std;

int max(int arr[],int n)
{
    int res = arr[1] - arr[0];
    int minVal = arr[0];
    for(int i=1;i<n;i++)
    {
        res =  max(res , arr[i]-minVal);
        minVal = min(minVal , arr[i]);

    }
    return res;
}
int main()
{
    int arr[] = {10,20,30};
    int n = 3;
    cout << max(arr,n);
    return 0;
}