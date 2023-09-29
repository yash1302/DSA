#include<iostream>
using namespace std;

int max_sub(int arr[],int n)
{
    int ans = arr[0];
    int final = arr[0];
    for(int i=1;i<n;i++)
    {
        ans = max(ans+arr[i],arr[i]);
        final = max(ans,final);
    }
    return final;
}
int main()
{
    int arr[] = {-3,8,-2,4,-5,6};
    int n = 6;
    cout<<max_sub(arr,n);
    return 0;
}