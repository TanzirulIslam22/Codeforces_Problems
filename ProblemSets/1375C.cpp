// Element Extermination
// solver: Tanzirul_Islam*/

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int test;
    cin >> test;
    while (test--)
    {
        int n;
        cin >> n;
        vector<int> a(n);
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        if (a[0] < a[n - 1])
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }
}
