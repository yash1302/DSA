#include<iostream>
using namespace std;


bool sorted(int arr[],int n)
{
    for(int i = 0; i < n; i++)
    {
        if(arr[i] > arr[i+1])
        {
            return false;
        }
    }
    return true;
}
int main()
{
    int arr[] = {10, 10, 10 , 10};
    int n = 4;
    bool ans = sorted(arr,n);
    if(ans == true)
    {
        cout<<"sorted"<<endl;
    }
    else{
        cout<<"not sorted"<<endl;
    }
    return 0;
}