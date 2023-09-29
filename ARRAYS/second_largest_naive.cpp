#include<iostream>
using namespace std;

int get_largest(int arr[],int n){
    int result = 0;
    for(int i=1;i<n;i++){
        if(arr[i]>arr[result])
        {
            result = i;
        }
    }
    return result;
}

int second_largest(int arr[],int n)
{
    int largest = get_largest(arr,n);
    int res = -1;
    for(int i=0;i<n;i++)
    {
        if(arr[i]!=arr[largest])
        {
            if(res == -1)
            {
                res = i;
            }
            else if(arr[i]>arr[res])
            {
                res = i;
            }
        }
    }
    return arr[res];
}  
int main()
{
    int arr[] = {20, 10, 34 , 5};
    int n = 4;
    cout << second_largest(arr,n) << endl;
    return 0;
}
