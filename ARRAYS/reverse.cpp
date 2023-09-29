#include<iostream>
using namespace std;

void reverse(int arr[],int n)
{
    int low = 0,high = n-1;
    for(int i=0;i<n;i++)
    {
        while(low<high)
        {
            int temp = arr[low];
            arr[low] = arr[high];
            arr[high] = temp;
            low++;
            high--;
        }
    }

    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
}

int main()
{
    int arr[] = {10, 6, 9 , 1};
    int n = 4;

    reverse(arr,n);

    return 0;

}