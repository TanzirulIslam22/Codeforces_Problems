#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int m, n;
        cin >> m >> n;
        string a, b;
        cin >> a >> b;
        int j = 0, k = 0;
        for (int i = 0; i < n && j < m; i++)
        {
            if (b[i] == a[j])
            {
                k++;
                j++;
            }
        }
        cout << k << endl;
    }
}