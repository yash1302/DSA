#include<iostream>
using namespace std;

void merge(int a[],int b[],int m,int n)
{
    int i=0,j=0;

    while(i<m && j<n)
    {
        if(a[i]<=b[j])
        {
            cout<<a[i]<<" ";
            i++;
        } 

        else
        {
            cout<<b[j]<<" ";
            j++;
        }
    }

    while(i<m)
    {
        cout<<a[i]<<" ";
        i++;
    }

    while(j<n)
    {
        cout<<b[j]<<" ";
        j++;
    }
}

int main()
{
    int a[] = {1,2,3,4};
    int b[] = {5,6,7,8};
    int m = 4, n=4;

    merge(a,b,m,n);
    return 0;
}