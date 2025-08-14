/*2009A_Minimize!
solver: Tanzirul_Islam*/

#include <bits/stdc++.h>
using namespace std;
int main()
{
    int test;
    cin >> test;
    while (test--)
    {
        int a, b, c;
        cin >> a >> b;
        c = min(a, b);
        cout << (c - a) + (b - c) << endl;
    }
}