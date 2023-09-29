#include<iostream>
using namespace std;

void move_zero(int arr[],int n)
{
   for(int i=0;i<n;i++)
   {
    if(arr[i]==0)
    {
        for(int j = i;j<n;j++)
        {
            if(arr[j]!=0)
            {
                swap(arr[i],arr[j]);
            }
        }
    }
   }
   for(int i=0;i<n;i++)
   {
    cout<<arr[i]<<" ";
   }
}
int main()
{
    int arr[] = {1,2,0,3,0};
    int n = 5;
    move_zero(arr,n);
    return 0;
}