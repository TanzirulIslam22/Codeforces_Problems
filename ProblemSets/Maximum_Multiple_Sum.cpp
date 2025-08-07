#include <bits/stdc++.h>
using namespace std;
int main()
{
    int test;
    cin >> test;
    while (test--)
    {
        int n;
        cin >> n;
        int max = 0, answer = 0;
        for (int i = 2; i <= n; i++)
        {
            int sum = 0;
            for (int j = 1; j * i <= n; j++)
            {
                sum += (i * j);
            }
            if (max < sum)
            {
                max = sum;
                answer = i;
            }
        }
        cout << answer << endl;
        }
    return 0;
}