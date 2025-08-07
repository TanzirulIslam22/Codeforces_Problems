#include <bits/stdc++.h>
using namespace std;
int main()
{

    int test;
    cin >> test;
    while (test--)
    {
        int n, new_n;
        cin >> n;
        long long int coins = 1;
        if (n == 1)
        {
            cout << "1" << endl;
            continue;
        }
        while (n >= 3)
        {
            new_n = n / 4;
            coins = coins + 1;
            n = new_n;
        }

        cout << coins << endl;
    }
}