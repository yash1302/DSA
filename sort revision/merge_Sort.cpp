#include<iostream>
using namespace std;

void merge(int arr[],int low,int mid,int high)
{
    // here we seperate sorted arrays into left and right so that we can
    //sort two seprate arrays 

    int n1 = mid-low+1, n2 = high - mid;

    int left[n1],right[n2];

    for(int i=0;i<n1;i++)
    {
        left[i] = arr[low + i];
    }

    for(int j=0;j<n2;j++)
    {
        right[j] = arr[mid + 1 + j];
    }

    // now we combine two different sorted arrays

    int i=0,j=0,k=low;

    while(i<n1 && j<n2)
    {
        if(left[i]<=right[j])
        {
            arr[k] = left[i];
            i++;
            k++;
        }
        else
        {
            arr[k] = right[j];
            j++;
            k++;
        }
    }

    while(i<n1)
    {
        arr[k] = left[i];
        i++;
        k++;
    }

    while(j<n2)
    {
        arr[k] = right[j];
        j++;
        k++;
    }
}

void mergeSort(int arr[],int left,int right)
{
    if(left<right)
    {
        int mid = (left+right)/2;
        mergeSort(arr,left,mid);
        mergeSort(arr,mid+1,right);
        merge(arr,left,mid,right);
    }
}

void print(int arr[],int n)
{
    for (int i = 0; i < n; i++)
    {
        cout<<arr[i]<<" ";
    }
    
}



int main()
{

    int arr[] = {2,1,5,3,4};
    int left = 0;
    int right = 4;
    int n = 5;
    
    mergeSort(arr,left,right);
    print(arr,n);
    return 0;
}