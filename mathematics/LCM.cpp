#include<iostream>
using namespace std;

int gcd(int a,int b)
{
    if(b==0)
    {
        return a;
    }
    else{
        return gcd(b,a%b);
    }
}
int lcm(int a,int b)
{
    return (a*b)/gcd(a,b);
}
int main()
{
    cout<<lcm(4,6);
    // int a = 4;
    // int b = 6;

    // int res = max(a,b);
    // while(true)
    // {
    //     if(res%a==0 && res%b==0)
    //     {
    //         break;
    //     }
    //     res++;
    // }
    // cout<<res;

    return 0;
}