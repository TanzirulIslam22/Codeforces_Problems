/* 1999a_A+B Again?
author: Tanzirul_Islam*/

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int test;
    cin >> test;
    while (test--)
    {
        int b, c, num, sum = 0;
        cin >> num;
        b = num / 10;
        c = num % 10;
        sum = b + c;
        cout << sum << endl;
    }
}
