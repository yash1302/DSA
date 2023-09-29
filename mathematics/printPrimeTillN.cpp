#include <iostream>
#include <vector>
using namespace std;

bool isPrime(int n)
{
    if (n == 1)
    {
        return false;
    }
    for (int i = 2; i * i <= n; i++)
    {
        if (n % i == 0)
        {
            return false;
        }
    }
    return true;
}
void sieve(int n)
{
    vector<bool> isPrime(n + 1, true);
    for (int i = 2; i * i <= n; i++)
    {
        if (isPrime[i]==true)
        {
            for (int j = 2 * i; j <= n; j++)
            {
                isPrime[j] = false;
            }
        }
    }
    for (int i = 2; i <= n; i++)
    {
        if (isPrime[i])
        {
            cout << i << endl;
        }
    }
}
int main()
{
    sieve(30);
    return 0;
}