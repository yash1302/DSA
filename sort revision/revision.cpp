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

void selectionSort(int* arr,int n){
    
    for(int i=0;i<n;i++){
        int swapPosition = i;
        for(int j=i;j<n;j++){
            if(arr[j]<arr[swapPosition]){
                swapPosition = j;
            }
        }
        swap(arr[swapPosition],arr[i]);
    }

    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
}

void insertionSort(int* arr,int n){
    for(int i=1;i<n;i++){
        int key = arr[i];
        int j = i-1;
        while(j>=0 && arr[j]>key){
            arr[j+1] = arr[j];
            j--;
        }
        arr[j+1] = key;
    }

    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
}

int main()
{
    int arr[] = {7,4,2,3,6};
    int size = sizeof(arr)/sizeof(arr[0]);
    insertionSort(arr,size);
    return 0;
}