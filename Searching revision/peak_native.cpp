#include<iostream>
using namespace std;

int peek(int arr[],int n)
{
    if(arr[0]>=arr[1])
    {
        return arr[0];
    }

    if(arr[n-1]>=arr[n-2])
    {
        return arr[n-1];
    }
    for(int i=0;i<n-1;i++)
    {
        if(arr[i]>=arr[i+1] && arr[i]>=arr[i-1])
        {
            return arr[i];
        }
    }
    return 0;
}

int main()
{
    int arr[] = {1,2,3,2,4};
    int n = 5;
    cout<<peek(arr,n)<<endl;
    return 0;
}