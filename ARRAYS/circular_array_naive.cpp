#include<iostream>
using namespace std;

int sum(int arr[],int n)
{
    int res = arr[0];
    for(int i = 1; i < n; i++)
    {
        int sum = arr[i];
        int curr_max = arr[i];

        for(int j = 1; j <n;j++)
        {
            int idx = (i+j)%n;
            sum += arr[idx];
            curr_max = max(curr_max,sum);
        }
        res = max(res,curr_max);
    }
    return res;
}
int main()
{
    int arr[] = {5,-2,3,4};
    int n = 4;
    cout<<sum(arr,n)<<endl;
    return 0;
}