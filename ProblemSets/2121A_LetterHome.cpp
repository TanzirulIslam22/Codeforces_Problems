/*
A. Letter Home
Author: Tanzirul Islam
*/

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int test;
    cin >> test;

    while (test--)
    {
        int n, s, minimum_steps;
        cin >> n >> s;
        vector<int> nums(n);

        for (int i = 0; i < n; i++)
        {
            cin >> nums[i];
        }
        minimum_steps = min((abs(s - nums[0]) + nums[n - 1] - nums[0]), (abs(s - nums[n - 1]) + nums[n - 1] - nums[0]));
        cout << minimum_steps << endl;
    }
}