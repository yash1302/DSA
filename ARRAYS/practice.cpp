// #include<iostream>
// using namespace std;
// int largest(int arr[],int n)
// {
//     int largest = arr[0];
//     for(int i = 1; i <n;i++)
//     {
//         if(arr[i] > largest)
//         {
//             largest = arr[i];
//         }
//     }
//     return largest;
// }
// int main()
// {
//     int arr[] = {0, 10,3,20};
//     int n = 4;
//     cout << largest(arr,n) << endl;
//     return 0;
// }


// #include<iostream>
// using namespace std;
// void diff(int arr[],int n)
// {
//     int largest = arr[0];
//     int count = 1;    
//     for(int i = 1; i < n; i++)
//     {
//         if(arr[i]>largest){
//             largest = arr[i];
//             count++;
//         }
//     }
//     int minimum = INT16_MAX;
//     for(int i = 0; i < count; i++)
//     {
//         if(arr[i]<minimum){
//             minimum = arr[i];
//         }
//     }   
//     cout<<largest-minimum<<endl;   
// }
// int main()
// {
//     int arr[] = {10,20,30};
//     int n = 3;
//     diff(arr,n);
//     return 0;
// }

#include<iostream>
using namespace std;

int freq(int arr[], int n)
{
    int freq = 1;
    int i=1;
    while(i<n)
    {
        while(i<n&&arr[i] == arr[i-1])
        {
            freq++;
            i++;
        }
        cout<<arr[i]<<" "<<freq<<endl;
        i++;
        
    }
}
int main()
{
    int arr[] = {10,10,30};
    int n = 3;
    freq(arr,n);
    return 0;
}
