#include<iostream>
using namespace std;

void insertion(int arr[],int n)
{
    for(int i=0;i<n;i++)
    {
        bool flag = true;
        
        for(int j=0;j<n;j++)
        {
            if(arr[j]>arr[i])
            {
                flag = false;
                 break;
            }
        }
        

        if(flag == true)
        {
            cout<<arr[i]<<endl;
        }
    }

}   
int main()
{
    int arr[] = {1,2,4,5,3,6};
    int n = 6;
    insertion(arr,n);
    return 0;
}
