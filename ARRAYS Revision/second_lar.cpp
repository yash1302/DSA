#include<iostream>
using namespace std;
int getlargest(int arr[],int n)
{
    int lar = 0;
    for(int i=1;i<n;i++)
    {
        if(arr[i]>arr[lar])
        {
            lar = i;
        }
    }
    return lar;
}

int second_lar(int arr[],int n)
{
    int largest = getlargest(arr,n);

    int res = -1;

    for(int i=0;i<n;i++)
    {
        if(arr[i]!=arr[largest])
        {
            if(res==-1)
            {
                res = i;
            }
            else if(arr[i]>arr[res])
            {
                res = i;
            }
        }
    }
    return arr[res] ;
}
int main()
{
    int arr[] = {1,2,3,4,5,6};
    int n = 6;
    cout<<second_lar(arr,n)<<endl;

    return 0;
}