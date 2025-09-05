// Perfect Permutation
// Solver: Tanzirul_Islam

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
        for (int i = 1; i < n; i++)
        {
            cout << i + 1 << " ";
        }
        cout << '1';
        cout << "\n";
    }
}