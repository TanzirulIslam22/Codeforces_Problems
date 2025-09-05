// Twin Permutations
// Solver: Tanzirul_Islam

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int test;
    cin >> test;
    while (test--)
    {
        int n, x, output;
        cin >> n;
        for (int i = 0; i < n; i++)
        {
            cin >> x;
            output = n + 1 - x;
            cout << output << " ";
        }
        cout << "\n";
    }
}