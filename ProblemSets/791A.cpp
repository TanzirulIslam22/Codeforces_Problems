#include <bits/stdc++.h>
using namespace std;
int main()
{
    int a, b;
    cin >> a >> b;

    for (int i = 1;; i++)
    {
        a = a * i * 3;
        b = b * i * 2;

        if (a > b)
        {
            cout << i;
            break;
        }
    }
}