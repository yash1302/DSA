#include<iostream>
using namespace std;

void merge(int a[],int b[],int m,int n)
{
    int i=0,j=0;
    while(i<m && j<n)
    {
        if(a[i]<b[j])
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
    int a[] = {10,20,50};
    int b[] = {5,50,50};
    int m = 3,n=3;
    merge(a,b,m,n);
    return 0;
}