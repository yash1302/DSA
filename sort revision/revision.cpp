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

void mergeTwoSortedArrays(int* arr1,int* arr2,int m,int n){
    int i=0,j=0;
    while(i<m && j<n){
        if(arr1[i]<=arr2[j]){
            cout<<arr1[i]<<" ";
            i++;
        }
        else if(arr2[j]<arr1[i]){
            cout<<arr2[j]<<" ";
            j++;
        }
    }
    while(i<m){
        cout<<arr1[i]<<" ";
        i++; 
    }
    while(j<n){
        cout<<arr2[j]<<" ";
        j++;
    }
}

void merge(int* arr,int low,int mid,int high){
    int n1 = mid - low + 1;
    int n2 = high - mid;

    int left[n1],right[n2];

    for(int i=0;i<n1;i++){
        left[i] = arr[low + i];
    }
    for(int j=0;j<n2;j++){
        right[j] = arr[mid + j + 1];
    }

    int i=0,j=0,k=low;

    while(i<n1 && j<n2){
        if(left[i]<=right[j]){
            arr[k] = left[i];
            i++;
            k++;
        }
        else{
            arr[k] = right[j];
            j++;
            k++;
        }
    }
    while(i<n1){
        arr[k] = left[i];
        i++;
        k++;
    }
    while(j<n2){
        arr[k] = right[j];
        j++;
        k++;
    }
}

void intersectionOfTwoArrays(int* a,int* b,int size1, int size2){
    int i=0,j=0;
    while(i<size1 && j<size2){

        if(i>0 && a[i] == a[i-1]){
            i++;
            continue;
        }
        if(a[i]<b[j]){
            i++;
        }
        else if(b[j]<a[i]){
            j++;
        }
        else{
            cout<<a[i]<< " ";
            i++;
            j++;
        }
    }
}

void mergeSort(int* arr,int low,int high){
    if(low<high){
        int mid = (low+high)/2;
        mergeSort(arr,low,mid);
        mergeSort(arr,mid+1,high);
        merge(arr,low,mid,high);
    }
}

void unionOfTwoArrays(int* a,int* b,int size1, int size2){
    int i=0,j=0,k=0;
    int arr[size1 + size2];
    while(i>size1 && j>size2){
        if(a[i]<b[j]){
            arr[k] = a[i];
            i++;
            k++;
        }
        else if(b[j]<a[i]){
            arr[k] = b[j];
            j++;
            k++;
        }
        else if(b[j] != arr[k-1] || a[i] != arr[k-1]){
            arr[k] = a[i];
            i++;
            j++;
            k++;
        }
    }
    while(i<size1){
        arr[k] = a[i];
        i++;
        k++;
    }
    while(j<size2){
        arr[k] = b[j];
        j++;
        k++;
    }


    for(int i=0;i<size1+size2;i++){
        cout<<arr[i]<<" ";
    }
}


int countMerge(int* arr,int low,int mid,int high){
    int n1 = mid - low + 1;
    int n2 = high - mid;

    int left[n1],right[n2];

    for(int i=0;i<n1;i++){
        left[i] = arr[low + i];
    }

    for(int j=0;j<n2;j++){
        right[j] = arr[mid + j + 1];
    }

    int i=0,j=0,k=low,res = 0;

    while(i<n1 && j<n2){
        if(left[i]<right[j]){
            arr[k] = left[i];
            i++;
            k++;
        }
        else{
            arr[k] = right[j];
            res =res +  (n1 - i);
            j++;
            k++;
        }
    }

    while(i<n1){
        arr[k] = left[i];
        i++;
        k++;
    }
    while(j<n2){
        arr[k] = right[j];
        j++;
        k++;
    }

    return res;
}



int countInversion(int* arr,int low,int high){
    int res = 0;
    if(low<high){
        int mid = (low+high)/2;
        res = res + countInversion(arr,low,mid);
        res = res + countInversion(arr,mid+1,high);
        res = res + countMerge(arr,low,mid,high);
    }
    return res;
}


void naivePartitionOfArray(int* arr,int size, int partitionElement){
    int temp[size];
    int idx = 0;

    for(int i=0;i<size;i++){
        if(arr[i]<=partitionElement){
            temp[idx] = arr[i];
            idx++;
        }
    }

    for(int i=0;i<size;i++){
        if(arr[i]>partitionElement){
            temp[idx] = arr[i];
            idx++;
        }
    }

    for(int i=0;i<size;i++){
        cout<<temp[i]<<" ";
    }
}


void lamutoPartition(int* arr,int size){
    int low = -1;
    int pivot = arr[size];


    for(int j = 0;j<size;j++){
        if(arr[j]<pivot){
            low++;
            swap(arr[j],arr[low]);
        }
    }

    swap(arr[size],arr[low+1]);


    for(int i=0;i<=size;i++){
        cout<<arr[i]<<" ";
    }

    
}


int main()
{
    int arr[] = {2,4,1,3,5};
    int size1 = sizeof(arr)/sizeof(arr[0]);
    lamutoPartition(arr,size1-1);
    return 0;
}