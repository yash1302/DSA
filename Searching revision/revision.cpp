#include<iostream>
using namespace std;

int binarySearchIterative(int* arr,int n,int element){
    int low = 0, high = n-1;

    while(low<high){
       int mid = (low+high)/2;
       if(arr[mid] == element){
        return mid;
       }
       else if(arr[mid]>element){
        high = mid-1;
       }
       else{
        low = mid+1;
       }
    }

    return -1;
}

int binarySearchRecursive(int* arr,int low,int high,int x){
    if(low>high){
        return -1;
    }
    int mid = (low+high)/2;
    // cout<<mid<<" "<<low<<" "<<high<<" "<<endl;
    if(arr[mid] == x){
        // cout<<arr[mid]<<endl;
        return arr[mid];
    }
    else if(arr[mid]>x){
        return binarySearchRecursive(arr,low,mid-1,x);
    }
    else
        return binarySearchRecursive(arr,mid+1,high,x);
    
}

int firstOccurenceOfElement(int* arr,int n,int x){
    int low = 0,high = n-1;

    while(low<=high){
        int mid = (low+high)/2;
        // cout<<mid<<" "<<low<<" "<<high<<" "<<endl;
        // cout<<"array"<<arr[mid]<<" "<<arr[mid-1]<<endl;

        if(arr[mid]>x){
            high = mid-1;
            // 
        }
        else if(arr[mid]<x){
            low = mid+1;
            // cout<<mid<<" "<<low<<" "<<high<<" "<<endl;
        }
        else{
            if(mid == 0 || arr[mid] != arr[mid-1]){
                return mid;
            }
            else{
                // cout<<mid<<" "<<low<<" "<<high<<" "<<endl;
                high = mid-1;
            }
        }
    }
    return -1;
}

int lastOccurenceOfElement(int* arr,int size,int x){
    int low = 0,high = size-1;

    while(low<=high){
        int mid = (low+high)/2;
        if(arr[mid]>x){
            high = mid-1;
        }
        else if(arr[mid]<x){
            low = mid+1;
        }
        else{
            if(mid == 0 || arr[mid] != arr[mid+1]){
                return mid;
            }
            else{
                low = mid+1;
            }
    }
    }
    return -1;
}

int countOccursInSortedArray(int* arr,int size,int x){
    int first = firstOccurenceOfElement(arr,size,x);
    if(first == -1){
        return 0;
    }
    int last = lastOccurenceOfElement(arr,size,x);
    return (last-first + 1);
}

int countOnesInSortedArray(int* arr,int size){
    int first = firstOccurenceOfElement(arr,size,1);
    // cout<<first<<"first"<<endl;
    return(size - first);
}

int squareRoot(int nos){
    int low = 0,high = nos,ans;
    
    
    while(low<high){
        int mid = (low+high)/2;
        // cout<<mid*mid;

        if(mid*mid == nos){
            return mid;
        }
        else if(mid*mid > nos){
            high = mid-1;
        }
        else{
            low = mid+1;
            ans = mid;
        }
    }
    return ans;
}

int binarySearch(int* arr,int low,int high,int x){
    // cout<<low<<" "<<high<<" "<<x<<endl;
    while(low<=high){
        int mid = (low+high)/2;
        cout<<low<<" "<<high<<endl;
        if(arr[mid] == x){
            return mid;
        }
        else if(arr[mid]>x){
            high = mid-1;
        }
        else{
            low = mid+1;
        }
    }
    return -1;
}

int searchInInfiniteArray(int* arr,int x){
    if(arr[0] == x){
        return 0;
    }
    int i=1;
    while(arr[i]<x){
        i = i*2;
    }
    cout<<i<<"----"<<endl;
    return binarySearch(arr,(i/2)+1,i-1,x);
}

int searchInSortedRotatedArray(int* arr,int size,int x){
    int low = 0,high = size-1;

    while(low<=high){
        int mid = (low+high)/2;
                // cout<<mid<<endl;
        if(arr[mid]==x){
            return mid;
        }

        else if(x<arr[mid]){
            if(x>=arr[low] && x < arr[mid] ){
                high = mid-1;
            }
            else{
                low = mid+1;
            }
        }
        else{
            if(x>arr[mid] && x<=arr[high]){
                low = mid+1;
            }
            else{
                high = mid-1;
            }
        }
    }
    return -1;
}

int peakElementInArray(int* arr,int size){
    int low = 0,high = size-1;

    while(low<=high){
        int mid = (low+high)/2;
        // cout<<mid<<endl;

        if((mid == 0 || arr[mid-1]<=arr[mid]) && (mid == size-1 || arr[mid+1]<=arr[mid])){
            return mid;
        }
        if(mid>0 && arr[mid-1]>=arr[mid]){
            high = mid-1;
        }
        else{
            low = mid+1;
        }
    }
    return -1;
}

int main()
{
    int arr[] = {5,20,40,30,20,50,60};
    int size = sizeof(arr)/sizeof(arr[0]);
    cout<<"element: "<<peakElementInArray(arr,size)<<endl;
    return 0;
}