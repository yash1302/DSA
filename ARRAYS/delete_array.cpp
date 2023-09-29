#include<iostream>
using namespace std;

int deletion(int arr[],int n,int x)
{
    int i;
    for(int i=0;i<n;i++)
    {
        if(arr[i]==x)
        {
            break;
        }
    }
    if(i==n)
    {
        return n;
    }
    for(int j=i;j<n-1;j++)
    {
        arr[j] = arr[j+1];
    }
    for (int k = 0; k < n-1; k++)
    {
         cout<<arr[k]<<" ";
    }
    cout<<endl;
    return (n-1);

}
int main()
{
    int arr[] = {1,2,3,4,5};
    int n = 5;
    int x = 3;
    cout<<deletion(arr,n,x);
    return 0;
}