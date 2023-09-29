#include<iostream>
using namespace std;

void diff(int arr[],int n)
{
    int res = arr[1] - arr[0];
    int min_val = arr[0];

    for(int i=1;i>n;i++)
    {
        res = max(res,arr[i]-min_val);
        min_val = min(min_val,arr[i]);
    }

    cout<<res;
}
int main()
{
    int arr[] = {1,9,2,4};
    int n = 4;
    diff(arr,n);
    return 0;
}