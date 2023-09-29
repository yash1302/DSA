#include<iostream>
using namespace std;

void two_pointer(int arr[],int n,int x)
{
    int low = 0;
    int high = n-1;
    while(low<=high)
    {
        if(arr[low]+arr[high] == x)
        {
            cout<<low<<" "<<high;
        }
        if(arr[low]+arr[high]>x)
        {
            high--;
        }
        else 
        {
            low++;
        }
    }
    
}
int main()
{
    int arr[] = {1,2,3,4,5,6};
    int n = 6;
    int x = 4;
    two_pointer(arr ,n,x);
    return 0;
}