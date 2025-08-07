#include <bits/stdc++.h>
using namespace std;
int main()
{
    string a;
    cin >> a;
    set<char> distinctChars(a.begin(), a.end());
    if (distinctChars.size() % 2 == 0)
    {
        cout << "CHAT WITH HER!";
    }
    else
    {
        cout << "IGNORE HIM!";
    }
}