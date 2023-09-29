#include<iostream>
using namespace std;

void leader(int arr[],int n)
{
    for(int i=0;i<n;i++)
    {
        bool flag = false;
        for(int j=i+1;j<n;j++)
        {
            if(arr[i]<=arr[j])
            {
                flag = true;
                break;
            }
        }
        if(flag==false)
        {
            cout<<arr[i]<<" ";
        }
    }
}
int main()
{
    int arr[] = {10, 0, 6 , 0,1};
    int n = 5;
    leader(arr,n);
    return 0;
}