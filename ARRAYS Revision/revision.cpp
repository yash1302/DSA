#include<iostream>
using namespace std;

void printArray( int* arr,int size){
    for(int i=0;i<=size;i++){
        cout<<arr[i]<<" ";
    }
}

void InsertIntoArray(int* arr,int size,int numberToInsert){
    size++;
    for(int i=size;i>=0;i--){
        arr[i+1] = arr[i];
    }
    arr[0] = numberToInsert;

    printArray(arr,size+1);
}

void deletetionFromArray(int* arr,int size){
    for(int i =0;i<size;i++){
        arr[i] = arr[i+1];
    }
    printArray(arr,size);
}

int largestElementInArray(int* arr,int size){
    int largestElement = arr[0];

    for(int i=1;i<=size;i++){
        if(arr[i]>largestElement){
            largestElement = arr[i];
        }
    }
    return largestElement;
}

int secondLargestElementInArray(int* arr,int size){
    int largest = arr[0];
    int res = -1;

    for(int i=1;i<=size;i++){
        if(arr[i]>largest){
            res = largest;
            largest = arr[i];
        }
        else if(arr[i] != largest){
            if(res == -1 || arr[i] > res ){
                res = arr[i];
            }
        }
    }

    return res;
}

bool isArraySorted(int* arr,int size){
    bool flag;
    for(int i=0;i<=size;i++){
        if(arr[i]>arr[i+1]){
            flag = false;
        }
        else{
            flag = true;
        }
    }
    return flag;
}

void reverseAnArray(int* arr,int size){
    int low = 0, high = size;

    while(low<high){
        int temp = arr[high];
        arr[high] = arr[low];
        arr[low] = temp;
        low++;
        high--;
    }

    printArray(arr,size);
}

void removeDuplictesFromArray(int* arr,int size){
    int res = 1;
    for(int i=1;i<=size;i++){
        if(arr[i] != arr[res-1]){
            arr[res] = arr[i];
            res++;
        }
    }

    printArray(arr, res);
}

void moveZeroesToEnd(int* arr,int size){
    int count = 0;
    for(int i=0;i<=size;i++){
        if(arr[i]!=0){
            int temp = arr[count];
            arr[count] = arr[i];
            arr[i] = temp;
            count++;
        }
    }

    printArray(arr,size);
}

void leftRotateByOneElements(int* arr, int size){
    int temp = arr[0];
    for(int i=0;i<=size;i++){
        arr[i] = arr[i+1];
    }
    arr[size] = temp;

    printArray(arr,size);
}


void reverse(int* arr,int start, int end){
    while(start<end){
        int temp = arr[start];
        arr[start] = arr[end];
        arr[end] = temp;
        start++;
        end--;
    }
}

void leftRotateByElements(int* arr,int size,int nosOfElements){
    reverse(arr,0,nosOfElements-1);
    reverse(arr,nosOfElements,size);
    reverse(arr,0,size);
    for(int i=0;i<=size;i++){
        cout<<arr[i]<<" ";
    }
}

void leaderInArray(int* arr,int size){
    int leader = arr[size];
    cout<<leader<<" ";
    for(int i=size;i>=0;i--){
        if(arr[i]>leader){
            leader = arr[i];
            cout<<leader<<" ";
        }
    }
}


void maximumDifference(int* arr,int size){
    int res = arr[1] - arr[0];
    int minVal = arr[0];

    for(int i=1;i<=size;i++){
        res = max(res,arr[i]-minVal);
        minVal = min(arr[i],minVal);
    }

    cout<<res<<" ";
}

void stockBuyAndSell(int* arr,int n){
    int profit = 0;
    for(int i=1;i<=n;i++){
        if(arr[i]>arr[i-1]){
            profit += arr[i] - arr[i-1];
        }
    }
    cout<<profit<<" ";
}
=

int main()
{
    int arr[] = {100,180,260,310,40,535,695};
    stockBuyAndSellAnother(arr,6);
    // cout<<"hello world!"<<endl;
    return 0;
}