#include<iostream>
using namespace std;

int secondLar(int arr[],int n)
{
    int res = -1,largest = 0;
    for(int i=1;i<n;i++)
    {
        if(arr[i]>arr[largest])
        {
            res = largest;
            largest = i;
        }
        else if(arr[i]!=arr[largest])
        {
            if(res==-1||arr[i]>arr[res])
            {
                res = i;
            }
        }
    }
    return arr[res];
}
int main()
{
    int arr[] = {1,2,3,4,5,6,7};
    int n = 7;

    cout<<secondLar(arr,n)<<endl;
    return 0;
}