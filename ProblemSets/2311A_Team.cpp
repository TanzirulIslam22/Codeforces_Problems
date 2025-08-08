/*
Problem: 231A_Teams
Solver: Tanzirul_Islam
*/

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int a, b, c, count = 0;
    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> a >> b >> c;
        if (a + b + c >= 2)
            count++;
    }
    cout << count << endl;
}