#include <bits/stdc++.h>
using namespace std;
int main()
{
    int test;
    cin >> test;
    while (test--)
    {
        int a, b, c, d;
        cin >> a >> b >> c >> d;
        if (a > b && c > d && c > b && a > d)
        {
            cout << "YES\n";
        }
        else if (a > b && c < d && d > b && a > c)
        {
            cout<<"YES\n";
        }
        else if (a < b && c > d && c > a && b > d)
        {
            cout<<"YES\n";
        }
        else if (a < b && c < d && b > c && a < d)
        {
            cout<<"YES\n";
        }
        else
        {
            cout << "NO\n";
        }
    }
}