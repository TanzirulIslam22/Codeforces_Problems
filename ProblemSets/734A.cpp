#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    string p;
    int a = 0, b = 0;
    cin >> t;
    cin >> p;
    for (int i = 0; i <= t; i++)
    {
        if (p[i] == 'A')
        {
            a++;
            
        }
        if (p[i] == 'D')
        {
            b++;
            
        }
    }
    if (a > b)
    {
        cout << "Anton";
    }
    else if (a < b)
    {
        cout << "Danik";
    }
    else
    {
        cout << "Friendship";
    }
}
