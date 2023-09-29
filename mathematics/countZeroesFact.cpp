#include<iostream>
using namespace std;

int main()
{
    // naive solution

    // int n = 10;
    // int fact = 1;
    // int res = 0;
    // for(int i=2 ;i<=n;i++)
    // {
    //     fact = fact * i;
    // }

    // while(fact%10 == 0)
    // {
    //     res++;
    //     fact = fact/10;
    // }

    // cout<<res;

    // efficient solution

    int n = 25;
    int res = 0;
    for(int i=5;i<=n;i=i*5)
    {
        res = res + n/i;
    }
    cout<<res;
    return 0;
}