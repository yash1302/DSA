#include<iostream>
using namespace std;

void deletion(int arr[],int n,int x)
{
    int i;
    for(i=0;i<n;i++)
    {
        if(arr[i] == x)
        {
            break;
        }
    }

    for(int j=i;j<n;j++)
    {
        arr[j] = arr[j+1];
    }
    for(int j=0;j<n-1;j++)
    {
        cout<<arr[j]<<" ";
    }
    cout<<endl;
    cout<<n-1;
}
int main()
{
    int arr[] = {1,2,3,4,5};
    int n = 5;
    int x = 3;
    deletion(arr,n,x);
    return 0;
}