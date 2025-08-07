#include <bits/stdc++.h>
using namespace std;
long long int fact(long long int n)
{
    if (n == 0)
        return 1;
    return fact(n - 1) * n;
}

int main()
{
    int test;
    cin >> test;
    while (test--)
    {
        int n, d;
        cin >> n >> d;
        long long num = 0;
        for (int i = 0; i < fact(n); i++)
        {
            num = num * 10 + d;
        }

        for (int j = 1; j < 10; j=j+2)
        {
            if (num % j == 0)
            {
                cout << j <<" ";
            }
        }
    }
}