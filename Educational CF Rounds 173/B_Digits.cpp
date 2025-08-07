#include <bits/stdc++.h>
using namespace std;

int main()
{
    int test;
    cin >> test;
    while (test--)
    {
        int n;
        long long int d;
        cin >> n >> d;
        string str;
        for (int i = 1; i <= (n * (n - 1)); i++)
        {
            string str = to_string(d);
            // cout << str;
            for (int j = 1; j <= 99; j = j + 2)
            {
                long long int b = stoi(str);
                if (b % j == 0)
                {
                    cout << j << " ";
                    
                }
            }
        }
    }
}