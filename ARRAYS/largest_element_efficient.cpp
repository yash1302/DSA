#include<iostream>
using namespace std;

int largest(int arr[],int n){
    int soln = 0;
    for(int i = 1; i < n; i++)
    {
        if(arr[i]>arr[soln])
        {
            soln = i;
        }
        return arr[soln];
    }
    return -1;
}

int main()
{
    int arr[] = {0, 10,20,3};
    int n = 4;
    cout << largest(arr,n) << endl;
    return 0;
}

// declare first element of array as largest element and then run for loop and check for every element in array 
// if it is bigger then the largest element
// if yes then update the largest element