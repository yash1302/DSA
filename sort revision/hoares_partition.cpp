#include<iostream>
using namespace std;

int hoares(int arr[],int low,int high)
{
    int pivot = arr[low];
    int i = low-1,j = high+1;

    while(true)
    {
        do
        {
            i++;
        } while (arr[i]<pivot);

        do
        {
            j--;
        } while (arr[j]>pivot);

        if(i>=j)
        {
            return j;
        }
        
        swap(arr[i],arr[j]);
    }

    // for (int i = 0; i <= high; i++)
    // {
    //     cout<<arr[i]<<" ";
    // }
}

void display(int arr[],int n)
{
    for (int i = 0; i < n; i++)
    {
        cout<<arr[i]<<" ";
    }
    
}

int main()
{
    int arr[] = {5,3,8,4,2,7,1,10};
    int low = 0;
    int high = 7;
    int n = 8;
    // cout<<"hello world";
    hoares(arr, low, high);
    display(arr,n);

    cout<<"aaaa"<<endl;
    cout<<hoares(arr, low, high);
    return 0;
}