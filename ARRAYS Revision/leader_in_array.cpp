#include<iostream>
using namespace std;

void leader(int arr[],int n)
{
    for(int i=0;i<n;i++)
    {
        bool flag = true;
        for(int j=i+1 ;j<n;j++)
        {
            if(arr[i]<=arr[j])
            {
                flag = false;
                
            }
        }
        if(flag==true)
        {
            cout<<arr[i]<<" ";
        }
    }
}
int main()
{
    int arr[] = {7,7,3,4,5};
    int n = 5;
    leader(arr,n);
    return 0;
}