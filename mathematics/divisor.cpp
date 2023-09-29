#include<iostream>
using namespace std;

// naive solution

// void divisor(int n)
// {
//     for(int i=1;i<=n;i++)
//     {
//         if(n%i==0)
//         {
//             cout<<i<<endl;
//         }
//     }
// }

// efficient solution
// it donot divide solution in ordered pair

// void divisor(int n)
// {
//     for(int i=1;i*i<=n;i++)
//     {
//         if(n%i==0)
//         {
//             cout<<i<<endl;
//         }
//         if(i!=n/i)
//         {
//             cout<<n/i<<endl;
//         }
//     }
// }

// print solution in order and time complexity is theta(square root n)

void divisor(int n)
{
    // first loop print number till square root of n
    int i;
    for(i=1;i*i<n;i++)
    {
        if(n%i==0)
        {
            cout<<i<<endl;
           
        }
    }
    // second loop print from root n to n
    for( ;i>=1;i--)
    {
        if(n%i==0)
        {
            cout<<n/i<<endl;
        }
    }
}
int main()
{
    divisor(6);
    return 0;
}