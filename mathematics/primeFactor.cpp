#include<iostream>
using namespace std;

// bool isPrime(int n)
// {
//     if(n==1)
//     {
//         return false;
//     }
//     for(int i =2;i*i<=n;i++)
//     {
//         if(n%i == 0)
//         {
//             return false;
//         }
//     }
//     return true;
// }
// void primeFact(int n)
// {
//     for(int i=2;i<n;i++)
//     {
//         if(isPrime(i))
//         {
//             int x = i;
//             while(n%x==0)
//             {
//                 cout<< i<<endl;
//                 x = x*i;
//             }
//         }
//     }
// }

// void primeFact(int n)
// {
//     if(n<=1)
//     {
//         cout<<"not a prime"<<endl;
//     }
//     for(int i=2;i*i<=n;i++)
//     {
//         while(n%i==0)
//         {
//             cout<<i<<endl;
//             n = n/i;
//         }
//     }
//     if(n>1)
//     {
//         cout<<n<<endl;
//     }
// }

void primeFact(int n)
{
    if(n<=1)
    {
        cout<<"not a prime number"<<endl;
    }
    while(n%2 ==0)
    {
        cout<<"2"<<endl;
        n = n/2;
    }
    while(n%3==0)
    {
        cout<<"3"<<endl;
        n = n/3;
    }

    for(int i = 5;i*i<=n;i = i+6)
    {
        while(n%i == 0)
        {
            cout<<i<<endl;
            n = n/i;
        }
        while(n%(i+2)==0)
        {
            cout<<(i+2)<<endl;
            n = n/(i+2);
        }
        if(n>3)
        {
            cout<<n<<endl;
        }
    }
}
int main()
{

    primeFact(12);
    return 0;
}