#include<iostream>
using namespace std;


void bubbleSort(int* arr,int n){
    bool swapped = false;
    for(int i=0;i<n-1;i++){
        for(int j=0;j<n-i-1;j++){
            if(arr[j+1]<arr[j]){
                swap(arr[j],arr[j+1]);
                swapped = true;
            }
        }
        if(swapped == false){
            break;
        }
    }

    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";;
    }
}

int main()
{
    int arr[] = {2,10,8,7};
    int size = sizeof(arr)/sizeof(arr[0]);
    bubbleSort(arr,size);
    return 0;
}