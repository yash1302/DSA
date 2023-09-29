#include<iostream>
using namespace std;

int stock(int arr[],int start,int end)
{
    if(end<=start)
    {
        return 0;
    }
    int profit = 0;
    for(int i=start;i<end;i++)
    {
        for(int j = i+1;j<=end;j++)
        {
            if(arr[j] > arr[i])
            {
                int curr_profit = arr[j] - arr[i] +
                stock(arr,start,i-1) + stock(arr,j+1,end);

                profit = max(curr_profit,profit);
            }

        }
    }
    return profit;
}
int main()
{
    int arr[] = {1,5,3,8,12};
    int start = 0;
    int end = 5;
    cout<<stock(arr,start,end);
    return 0;
}