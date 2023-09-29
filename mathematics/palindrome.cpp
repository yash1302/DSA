#include<iostream>
using namespace std;

int main()
{
    int nos = 121;
    int temp = nos;
    int rev = 0;
    while(temp>0)
    {
        int n = temp%10;
        temp = temp/10;
        rev = rev *10 + n;
    }
    if(rev==nos)
    {
        cout<<"palindrome"<<endl;
    }
    return 0;
}