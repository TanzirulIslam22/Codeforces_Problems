#include <bits/stdc++.h>
using namespace std;

int main()
{
    int m, n;
    cin >> m >> n;
    while(n--)
    {
        if (m % 10 == 0)
        {
            m = m / 10;
        }
        else
        {
            m=m-1;
        }
    }
    cout<<m;
}