#include <bits/stdc++.h>
using namespace std;
int main()
{
    int test;
    cin >> test;
    while (test--)
    {
        int n, count = 0;
        cin >> n;
        for (int a = 1; a <= 100; a++)
        {
            for (int b = 1; b <= 100; b++)
            {
                if ((a + b == n) && (2 <= n <= 100))
                {
                    count++;
                    break;
                }
            }
        }
        cout << count<<endl;
    }
}