#include<iostream>
using namespace std;

int largest(int arr[],int n)
{
    for(int i = 0; i < n; i++)
    {
        bool flag = true;
        for(int j = 0; j < n; j++)
        {
            if(arr[j] > arr[i])
            {
                flag = false;
                break;
            }
        }
        if(flag == true)
        {
            return arr[i];
        }
    }
    return -1;
}
int main()
{
    int arr[] = { 0, 0,};
    int n = 2;
    cout << largest(arr,n) << endl;
    return 0;
}