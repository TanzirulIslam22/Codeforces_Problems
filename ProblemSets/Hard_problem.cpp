#include <bits/stdc++.h>
using namespace std;
int main()
{
    int test;
    cin >> test;
    while (test--)
    {
        int m, a, b, c;
        cin >> m >> a >> b >> c;

        int p, q, r, s, x, y, z;
        
        p = m / 2;
        q = m - p;

        // first row
        r = p - a;
        if (r > 0)
        {
            while (s < 0)
            {
                s = r - c;
            }
        }

        // second row
        x = q - b;
        if (x > 0)
        {
            while (y < 0)
            {
                y = x - c;
            }
        }
        cout << a + s + b + y;
    }
}