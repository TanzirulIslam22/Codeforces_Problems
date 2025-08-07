#include <bits/stdc++.h>
using namespace std;
int main()
{
    int test;
    cin >> test;
    while (test--)
    {
        int c;
        cin >> c;

        if ((c - 1) % 3 == 0)
        {
            cout << "YES\n";  // Newline added
        }
        else
        {
            cout << "NO\n"; 
        }
    }
    return 0;
}
