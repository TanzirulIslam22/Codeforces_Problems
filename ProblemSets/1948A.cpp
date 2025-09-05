/*1948A_Special Characters
solver: Tanzirul_Islam*/

#include <bits/stdc++.h>
using namespace std;

int main()
{
    //not ok...............
    int test;
    cin >> test;
    while (test--)
    {
        int n;
        cin >> n;

        if (n==2)
        {
            cout << "YES" << endl;
            for (int i = 0; i < n / 2; i++)
            {
                cout << "AA";
            }
            cout << "\n";
        }
        else if(n > 2)
        {
            cout << "YES" << endl;
            for (int i = 0; i < n / 2 + 1; i++)
            {
                cout << "AABB" << endl;
            }
            cout << "\n";
        }

        else
        {
            cout << "NO" << endl;
        }
    }
}