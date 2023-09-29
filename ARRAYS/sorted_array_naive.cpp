#include<iostream>
using namespace std;


bool sorted(int arr[],int n)
{
    for(int i = 0; i < n; i++)
    {
        for(int j = i+1 ; j<n ; j++)
        {
            if(arr[j] < arr[i])
            {
                return false;
            }
        }
    }
    return true;
}
int main()
{   
    int arr[] = {10, 10, 10 , 1};
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