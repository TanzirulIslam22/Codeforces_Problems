/*Problem: 41A_Translation
Author: Tanzirul_Islam*/

#include <bits/stdc++.h>
using namespace std;

int main()
{

    string s, t, t_reverse;
    cin >> s >> t;

    t_reverse = t;
    reverse(t_reverse.begin(), t_reverse.end());

    if (s == t_reverse)
    {
        cout << "YES" << endl;
    }
    else
    {
        cout << "NO" << endl;
    }
}