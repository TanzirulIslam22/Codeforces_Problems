#include <bits/stdc++.h>
using namespace std;

int main()
{
    int test;
    cin >> test;
    while (test--)
    {
        int a;
        int b;
        int c;
        cin >> a >> b >> c;
        if (a < b && b < c)
        {
            cout << "STAIR" << endl;
        }
        else if (a < b && b > c)
        {
            cout << "PEAK" << endl;
        }
        else
        {
            cout << "NONE" << endl;
        }
    }
}