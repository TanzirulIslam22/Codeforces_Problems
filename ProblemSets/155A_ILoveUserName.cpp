/* 155A_I_love_%username%
author: Tanzirul Islam*/

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    vector<int> points(n);
    for (int i = 0; i < n; i++)
    {
        cin >> points[i];
    }

    int count = 0;
    int best = points[0];
    int worst = points[0];

    for (int i = 1; i < n; i++)
    {
        if (best < points[i])
        {
            count++;
            best = points[i];
        }
        if (worst > points[i])
        {
            count++;
            worst = points[i];
        }
    }

    cout << count << endl;
    return 0;
}
