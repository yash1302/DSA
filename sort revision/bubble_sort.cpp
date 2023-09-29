#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;

void bubbleSort(int arr[],int n)
{
   for(int i=0;i<n;i++)
   {

    bool swapped = false;
    for(int j=0;j<n-i-1;j++)
    {
        if(arr[j]>arr[j+1])
        {
            swap(arr[j],arr[j+1]);
            swapped = true;
        }
    }

    if(swapped == false)
    {
        break;
    }
   }

   for(int i=0;i<n;i++)
   {
    cout<<arr[i]<<" ";
   }
}

int main()
{
   int arr[] = {2,1,4,3};
   int n = 4;
   bubbleSort(arr,n);

   
    return 0;
}