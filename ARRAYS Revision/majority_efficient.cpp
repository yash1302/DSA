#include <iostream>
using namespace std;

int majority(int arr[], int n)
{
    int res = 0;
    int count = 1;
    for (int i = 1; i < n; i++)
    {
        if (arr[res] == arr[i])
        {
            count++;
        }
        else
        {
            count--;
        }
        if (count == 0)
        {
            res = i;
            count = 1;
        }
    }
    count = 0;
    for (int i = 0; i < n; i++)
    {
        if (arr[res] == arr[i])
        {
            count++;
        }
    }
    if (count <= n / 2)
    {
        return -1;
    }
    return arr[res];
}

int main()
{
    int arr[] = {1, 1, 1, 1, 2,2,2};
    int n = 7;
    cout << majority(arr, n);
    return 0;
}