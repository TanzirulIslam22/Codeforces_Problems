/*2126A_Only_One_Digit
author: Tanzirul_Islam*/

#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int test;
    cin >> test;
    while (test--)
    {
        int n, min = INT_MAX;
        cin >> n;
        string s = to_string(n);
        for (int i = 0; i < s.length(); i++)
        {
            if (min > s[i] - '0')
            { // convert char to int
                min = s[i] - '0';
            }
        }
        cout << min << endl;
    }
}
