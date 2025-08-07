#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    while (n!=0)
    {
        for (int i = 0; i <= n; i++)
        {
            n = n - 3;
            cout<<i;
        }
    }
}