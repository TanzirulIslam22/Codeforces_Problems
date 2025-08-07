#include <bits/stdc++.h>
using namespace std;
int main()
{
    long long int test;
    cin >> test;
    while (test--)
    {
        long long int l, r, d, u;
        cin >> l >> r >> d >> u;
        if ((l + r == d + u) && (pow(l, 2) + pow(d, 2) == (pow(r, 2) + pow(u, 2))))
        {
            cout << "Yes" << endl;
        }
        else
        {
            cout << "No" << endl;
        }
    }
    return 0;
}