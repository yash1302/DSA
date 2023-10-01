#include<iostream>
using namespace std;

int countMerge(int arr[],int l,int m,int h)
// l = low,m = mid,h = high
{
    int n1 = m-l+1, n2 = h-m;

    int left[n1],right[n2];

    for(int i=0;i<n1;i++)
    {
        left[i] = arr[l+i];
    }

    for(int j=0;j<n2;j++)
    {
        right[j] = arr[m+1+j];
    }

    int res = 0,i=0,j=0,k=l;

    while(i<n1 && j<n2)
    {
        if(left[i]<right[j])
        {
            arr[k] = left[i];
            i++;
            k++;
        }

        else
        {
            arr[k] = right[j];
            j++;
            res = res + (n1-i);
            k++;
        } 
    }

    while(i<n1)
    {
        arr[k] = left[i];
        i++;
        k++;
    }

    while(j<n2)
    {
        arr[k] = right[j];
        j++;
        k++;
    }

    return res;    
}


int countInv(int arr[],int l,int r)
{
    int res = 0;
    if(l<r)
    {
        int m = (l+r)/2;

        res = res + countInv(arr,l,m);
        res = res + countInv(arr,m+1,r);
        res = res + countMerge(arr,l,m,r);
         
    }

    return res;
}

int main()
{
    int arr[] = {2,4,1,3,5};
    int l = 0;
    int r = 4;

    cout<<countInv(arr,l,r);
    return 0;
}