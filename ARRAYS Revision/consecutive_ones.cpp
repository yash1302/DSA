#include<iostream>
using namespace std;

void consecutive(int arr[],int n)
{
    int count;
    int ans = 0;
    for(int i=0;i<n;i++)
    {
        if(arr[i]==1)
        {
            count++;
        }
        else{
            ans = max(ans,count);
            count = 0;
        }
    }
        cout<<ans;
}

int main()
{
    int arr[] = {0,0,1,1,1,0,0,};
    int n = 7;
    consecutive(arr,n);

    return 0;
}