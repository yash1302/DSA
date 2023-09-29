#include<iostream>
using namespace std;

void move(int arr[],int n)
{
    int temp = arr[0];
    for(int i = 1; i < n; i++)
    {
        arr[i-1]=arr[i];
    }
    arr[n-1]= temp;

    for(int i = 0; i < n; i++)
    {
        cout << arr[i] <<" ";
    }
}

void moved(int arr[],int n,int d)
{
    for(int i = 0; i < n; i++)
    {
        move(arr,n);
    }
}
int main()
{
    int arr[] = {10, 0, 6 , 0,1};
    int n = 5;
    int d = 2;
    moved(arr,n,d);
    return 0;
}