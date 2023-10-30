#include<iostream>
using namespace std;

const int R = 4;
const int C = 5;


void spiral(int arr[R][C],int R,int C)
{
    int top = 0,left = 0,right = C-1,bottom = R-1;

    while(top<=bottom && left<=right)
    {
        for(int i=left;i<=right;i++)
        {
            cout<<arr[top][i]<<" ";
        }
        top++;

        for(int i=top;i<=bottom;i++)
        {
            cout<<arr[i][right]<<" ";
        }
        right--;

        if(top<=bottom)
        {
            for(int i=right;i>=left;i--)
            {
                cout<<arr[bottom][i]<<" ";
            }
            bottom--;
        }

        if(left<=right)
        {
            for(int i=bottom;i>=top;i--)
            {
                cout<<arr[i][left]<<" ";
            }
            left++;
        }

    }
}

int main()
{
    int arr[R][C] = {{1,2,3,4,5},{6,7,8,9,10},{11,12,13,14,15},{16,17,18,19,20}};
    spiral(arr,R,C);
    return 0;
}