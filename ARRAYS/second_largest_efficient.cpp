#include<iostream>
using namespace std;

int second_largest(int arr[],int n)
{
    int res = -1,largest = 0;
    for(int i=1;i<n;i++)
    {
        if(arr[i]>arr[largest])
        {
            res = largest;
            largest = i;
        }
        else if(arr[i] != arr[largest])
        {
            if( res == -1 || arr[i]>arr[res] )
            {
                res = i;
            }
        }
    }

    if(res == -1)
    {
        return -1;
    }
    else
        return arr[res];
}
int main()
{
    int arr[] = {10, 10, 10 , 10};
    int n = 4;
    cout << second_largest(arr,n) << endl;
    return 0;
}