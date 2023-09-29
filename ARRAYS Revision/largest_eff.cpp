#include<iostream>
using namespace std;

void largest(int arr[],int n)
{
    int lar = arr[0];
    for(int i=1;i<n;i++)
    {
        if(arr[i]>lar)
        {
            lar = arr[i];
        }
    }
    cout<<lar;
    
}
int main()
{
    int arr[] = {1,2,3,45,50,75};
    int n = 6;
    largest(arr,n);
    return 0;
}