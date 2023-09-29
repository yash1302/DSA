#include<iostream>
using namespace std;

int rainStored(int arr[],int n)
{
    int stored = 0;
    for(int i = 1;i<n-1;i++)
    {
        int lmax = arr[i];
        for(int j=0;j<i;j++)
        {
            lmax = max(lmax,arr[j]);
        }
        
        int rmax = arr[i+1];
        for(int j=i+1;j<n;j++)
        {
            rmax = max(rmax,arr[j]);
        }
        stored = stored + (min(lmax,rmax) - arr[i]);
    }
    return stored;
}
int main()
{
    int arr[] = {3,0,1,2,5};
    int n = 5;
    cout<< rainStored(arr,n);
    return 0;
}