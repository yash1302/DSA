#include<iostream>
using namespace std;

int major(int arr[],int n)
{
    int count = 1;
    for(int i=0;i<n;i++)
    {
        for(int j=i+1;j<n;j++)
        {
            if(arr[i]==arr[j])
            {
                count++;
            }
        }

        if(count>n/2)
        {
            return i;
        }
    }
    return -1;
    
}

int main()
{
    int arr[] = {1,1,1,1,1,2,2,2,2,2};
    int n = 10;
    cout<<major(arr,n);
    return 0;
}