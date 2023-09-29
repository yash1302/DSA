#include<iostream>
using namespace std;

void freq(int arr[],int n)
{
    int i=1,freq = 1;
    while(i<n){
        while(i<n && arr[i]==arr[i-1]){
            freq++;
            i++;
        }
        cout<<arr[i-1]<<" "<<freq<<endl;
        i++;
        freq = 1;
    }
    if(i==1 || arr[n-2] != arr[n-1])
    {
        cout<<arr[n-1]<<" "<<"1"<<endl;
    }
}
int main()
{
    int arr[] = {1,1,2,3,3,3};
    int n = 6;
    freq(arr,n);
    return 0;
}