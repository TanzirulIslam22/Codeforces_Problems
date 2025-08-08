/*
Problem: 71A_Way_Too_Long_Words
Solver: Tanzirul_Islam
*/

#include <bits/stdc++.h>
using namespace std;

int main()
{
    string str;
    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> str;
        int length = str.length();
        if (length> 10)
        {
            cout << str[0] << (length - 2) << str[length - 1] << endl;
        }
        else
        {
            cout << str << endl;
        }
    }
}