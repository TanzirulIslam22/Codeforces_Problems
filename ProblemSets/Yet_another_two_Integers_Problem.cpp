#include <bits/stdc++.h>
using namespace std;
int main()
{
    int test;
    cin >> test;
    while (test--)
    {
        int a, b;
        int count = 0;
        cin >> a >> b;

        while (a != b)
        {
            for (int i = 0; i < 11; i++)
            {
                if (a > b)
                {
                    a = a - i;
                    count++;
                }
                else
                {
                    a = a + i;
                    count++;
                }
            }
        }
        cout <<count;
    }
}