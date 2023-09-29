#include<iostream>
using namespace std;

int main()
{
    int res = 0;
    int x=123;
    while(x>0)
    {
        x = x/10;
        res++;
    }
    cout << res <<endl;

    return 0;
}