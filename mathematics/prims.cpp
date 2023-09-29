#include<iostream>
using namespace std;

// naive solution

// bool prime(int n)
// {
//     if(n==1)
//     {
//         return false;
//     }
//     for(int i=2;i<n;i++)
//     {
//         if(n%i==0)
//         {
//             return false;
//         }
//     }
//     return true;
// }




// efficient solution

bool prime(int n)
{
    if(n==1)
    {
        return false;
    }
    for(int i=2;i*i<=n;i++)
    {
        if(n%i==0)
        {
            return false;
        }
    }
    return true;
}

// optimized solution

// bool prime(int n)
// {
//     if(n==1)
//     {
//         return false;
//     }
//     if(n==2 || n==3)
//     {
//         return true;
//     }

//     if(n%2==0 && n%3==0)
//     {
//         return false;
//     }

//     for(int i = 5;i*i<=n;i = i + 6)
//     {
//         if(n%i==0 || n%(i+2)==0)
//         {
//             return false;
//         }
//     }
//     return true;
// }
int main()
{
    int n = 5;
    if(prime(n)==false)
    {
        cout<<"not prime";
    }
    else{
        cout<<"prime";
    }
    return 0;
}
