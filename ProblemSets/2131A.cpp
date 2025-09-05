/*2131A_Lever
author: Tanzirul_Islam*/

#include <bits/stdc++.h>
using namespace std;
int main()
{
    int test;
    cin >> test;
    while (test--)
    {
        int n, count = 0;
        cin >> n;
        vector<int> a(n), b(n);

        for (int i = 0; i < n; i++)

            cin >> a[i];
        for (int i = 0; i < n; i++)
            cin >> b[i];

        for (int i = 0; i < n; i++)
            if (a[i] > b[i])
            {
                count = count + (a[i] - b[i]);
            }
        cout << count + 1 << endl;
    }
}