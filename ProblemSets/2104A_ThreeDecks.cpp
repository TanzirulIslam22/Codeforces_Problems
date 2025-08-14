/* 2104A_Three_Decks
author: Tanzirul_Islam
*/

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int test;
    cin >> test;
    while (test--)
    {
        int a, b, c, sum = 0, avg;
        cin >> a >> b >> c;
        sum = (a + b + c);
        avg = (a + b + c) / 3;
        if (sum % 3 == 0 && b <= avg)
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
    }
}