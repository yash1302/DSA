#include<iostream>
using namespace std;

int majority(int arr[],int n)
{
    int res = 0,count = 1;
    for (int i = 0; i < n; i++)
    {
        if(arr[res] == arr[i])
        {
            count++;
        }
        else
        {
            count--;
        }
        if(count == 0)
        {
            res = i;
            count = 1;
        }
    }
}
int main()
{
    return 0;
}