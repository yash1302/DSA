#include<iostream>
using namespace std;

int twoPointer(int arr[],int n,int x)
{
    int left = 0,right = n-1;
    while(left<right)
    {
        if(arr[left]+arr[right] == x)
        {
            return 1;
        }
        else if(arr[left]+arr[right]>x)
        {
            right--;
        }
        else
        {
            left++;
        }

    }
    return 0;
}
int main()
{
    int arr[] = {2,4,8,9,11,12,20,30};
    int n = 8;
    int x = 36;
    
    cout<<twoPointer(arr,n,x);
    return 0;
}