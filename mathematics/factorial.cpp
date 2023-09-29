#include<iostream>
using namespace std;

int main()
{
    int n = 4;
    int fact = 1;
    for(int i =2;i<=n;i++)
    {
        fact = fact * i; 
    }
    cout<<fact;
    return 0;
}