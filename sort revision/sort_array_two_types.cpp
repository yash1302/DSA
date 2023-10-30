#include<iostream>
using namespace std;

int sortt(int arr[],int n)
{
    int i = -1,j = n-1;

    while(true)
    {
        do
        {
            i++;
        } while (arr[i]<0);

        do
        {
            j--;
        } while (arr[j]>0);

        if(i>=j)
        {
            return j;
        }
        
        swap(arr[i],arr[j]);
    }

    // for (int k = 0; k < n; k++)
    // {
    //     cout<<arr[k]<<" ";
    // }
    

}

void display(int arr[],int n)
{
    for (int i = 0; i < n; i++)
    {
        cout<<arr[i]<<" ";
    }
    
}

int main()
{
    int arr[] = {-12,18,-15,20};
    int n = 4;
    cout << sortt(arr ,n )<<endl;
    display(arr,n);
    return 0;
}