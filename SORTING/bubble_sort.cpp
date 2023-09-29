#include<iostream>
using namespace std;

void bubble(int arr[],int n)
{
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n-i-1;j++)
        {
            if(arr[j]>arr[j+1])
            {
                swap(arr[j],arr[j+1]);
            }
        }
    }
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" "<<endl;
    }

}
int main()
{
    int arr[]={1,4,2,5,3,9,6};
    int n = 7;
    bubble(arr,n);
    return 0;
}