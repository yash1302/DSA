#include<iostream>
using namespace std;

void intersection(int a[],int b[],int m,int n)
{
    int i=0,j=0;

    while(i<m && j<n)
    {
        if(i>0 && a[i]==a[i-1])
        {
            continue;
        }

        if(a[i]<b[j])
        {
            i++;
        }
        else if(a[i]>b[j])
        {
            j++;
        }
        else
        {
            cout<<a[i]<<" ";
            i++;
            j++;
        }
    }

}


int main()
{
    int a[] = {1,2,5,6};
    int b[] = {1,3,5};
    int m = 4;
    int n = 3;

    intersection(a,b,m,n);
    

    return 0;
}