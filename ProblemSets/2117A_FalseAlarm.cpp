/*2117A_False_alarm
author: Tanzirul_Islam*/

#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--)
    {
        int n, x;
        cin >> n >> x;

        int l = -1, r = -1;

        for (int i = 1; i <= n; i++)
        {
            int door;
            cin >> door;
            if (door == 1)
            {
                if (l == -1)
                {
                    l = i; // first closed
                }
                r = i; // keep updating last closed
            }
        }

        if (r - l + 1 <= x)
            cout << "YES\n";
        else
            cout << "NO\n";
    }
}
