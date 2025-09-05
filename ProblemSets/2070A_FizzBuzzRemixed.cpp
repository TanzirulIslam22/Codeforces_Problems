/*2070A_FizzBuzzRemixed.cpp
solver: Tanzirul_Islam*/

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n; //no solve of fizzBUZZ
    cin >> n;
    if (n == 2 || n == 3)
    {
        cout << "NO SOLUTION";
    }
    else
    {
        if (n % 2 == 0)
        {
            for (int i = 2; i <= n; i = i + 2)
            {
                cout << i << " ";
            }
            for (int i = 1; i <= n; i = i + 2)
            {
                cout << i << " ";
            }
        }
        else
        {
            for (int i = 2; i <= n; i = i + 2)
            {
                cout << i << " ";
            }
            for (int i = 1; i <= n + 1; i = i + 2)
            {
                cout << i << " ";
            }
        }
    }
}