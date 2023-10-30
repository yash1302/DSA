#include<iostream>
using namespace std;


int main()
{
    int ** arr;
    int m=3,n=2;

    arr = new int *[m];

    for(int i=0;i<m;i++)
    {
        arr[i] = new int[n];
        for(int j=0;j<n;j++)
        {
            arr[i][j] = i;
            cout<<arr[i][j]<<" ";
        }
    }
    return 0;
}