#include<iostream>
using namespace std;

int gcd(int a,int b)
{
    if(b==0)
    {
        return a;
    }
    else 
    {
        return gcd(b,b%a);
    }

}
int main()
{
    cout<<gcd(12,15);
    return 0;
    // int a = 12;
    // int b = 15;

    // naive solution
    // int res = min(a,b);

    // while(res>0)
    // {
    //     if(a%res==0 && b%res==0)
    //     {
    //         break;
    //     }
    //     res--;
    // }
    // cout<<res;

    // euclidean algorithm

    // while(a!=b)
    // {
    //     if(a>b)
    //     {
    //         a = a-b;
    //     }
    //     else{
    //         b = b-a;
    //     }
    // }
    // cout<<a;

}