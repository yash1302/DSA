#include<iostream>
using namespace std;

void leader(int arr[],int n)
{
    int cur_ldr = arr[n-1];
    cout<<cur_ldr<<" ";

    for(int i=n-2;i>=0;i--)
    {
        if(arr[i]>cur_ldr)
        {
            cur_ldr = arr[i];
            cout<<arr[i]<<" ";
        }
    }

}
int main()
{
    int arr[] = {3,2,1};
    int n = 3;
    leader(arr,n);
    return 0;
}