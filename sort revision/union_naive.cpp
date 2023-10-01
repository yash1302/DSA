#include <iostream>
using namespace std;

void Union(int a[], int b[], int m, int n)
{
    int c[m + n];

    for (int i = 0; i < m; i++)
    {
        c[i] = a[i];
    }

    for (int i = 0; i < n; i++)
    {
        c[m + i] = b[i];
    }

    sort(c, c + m + n);
    for (int i = 0; i < m + n; i++)
    {
        if (i == 0 || c[i] != c[i - 1])
        {
            cout << c[i] << " ";
        }
    }
}

int main()
{
    int a[] = {3,5,8};
    int b[] = {2,8,9};
    int m = 3,n=3;

    Union(a,b,m,n);
    return 0;
}