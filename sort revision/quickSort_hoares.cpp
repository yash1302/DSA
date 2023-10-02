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
}

void quickSort(int arr[],int low,int high)
{
    if(low<high)
    {
        int p = hoares(arr,low,high);
        quickSort(arr,low,p);
        quickSort(arr,p+1,high);
    }
}

void display(int arr[],int n)
{
    for(int i=0;i<n;i++)
    {
        cout << arr[i] <<" ";
    }
}
int main()
{
    int arr[] = {8,4,7,9,3,10,5};
    int low = 0;
    int high = 6;
    int n = 7;
    

    quickSort(arr, low, high);  
    
    display(arr,n);
    return 0;
}