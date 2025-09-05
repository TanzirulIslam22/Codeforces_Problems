/*2067A_Adjacent Digit Sums
solver: Tanzirul_Islam*/

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int test;
    cin >> test;
    while (test--)
    {
        int x, y, k = 0;
        cin >> x >> y;

        if ((x + 1 - y) >= 0 && (x + 1 - y) % 9 == 0)
            cout << "Yes" << endl;

        else
            cout << "No" << endl;
    }
}