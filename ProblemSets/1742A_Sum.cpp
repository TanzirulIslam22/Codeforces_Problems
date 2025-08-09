/*Problem: 1742A_Sum
Author: Tanzirul_Islam*/

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int test;
    cin >> test;
    while (test--)
    {
        int a, b, c;
        cin >> a >> b >> c;
        if (a + b == c || b + c == a || a + c == b)
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
    }
}