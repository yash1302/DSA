#include<iostream>
using namespace std;

const int n = 4;

void tranpose(int arr[n][n])
{
    int temp[n][n];
    // for (int i=0 ;i < n;i++)
    // {
    //     for(int j=0;j<n;j++)
    //     {
    //         temp[i][j] = arr[j][i];
    //     }
    // }

    // for (int i=0 ;i < n;i++)
    // {
    //     for(int j=0;j<n;j++)
    //     {
    //         arr[i][j] = temp[i][j];
    //     }
    // }

    for (int i=0 ;i < n;i++)
    {
        for(int j=0;j<n;j++)
        {
            cout<<arr[i][j]<<" ";
        }
    }

    for (int i=0 ;i < n;i++)
    {
        for(int j=i+1;j<n;j++)
        {
            swap(arr[i][j],arr[j][i]);
        }
    }

    for (int i=0 ;i < n;i++)
    {
        for(int j=0;j<n;j++)
        {
            cout<<arr[i][j]<<" ";
        }
    }


}

int main()
{
    int arr[n][n] = {{1,2,3,4},{5,6,7,8},{9,10,11,12},{13,14,15,16}};

    tranpose(arr);
    return 0;
}