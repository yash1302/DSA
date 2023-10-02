#include<iostream>
using namespace std;

int partition(int arr[],int low,int high)
{
    int i = low-1;
    // int p = random(low,high);
    int pivot = arr[high];

    for(int j = low;j<=high-1;j++)
    {
        if(arr[j]<pivot)
        {
            i++;
            swap(arr[i],arr[j]);
        }
    }

    swap(arr[i+1],arr[high]);
    return(i+1);
}

int ksmall(int arr[],int n,int k)
{
    int l=0,r=n-1;

    while(l<r)
    {
        int p = partition(arr,l,r);

        if(p==k-1)
        {
            return arr[p];
        }
        else if(p>k-1)
        {
            r = p-1;
        }
        else
        {
            l = p+1;
        }
    }
    return 0;
}

int main()
{
    int arr[] = {10,4,5,8,11,6,26};
    int n = 7;
    int k = 5;
    cout<<ksmall(arr,n,k);
    return 0;
}