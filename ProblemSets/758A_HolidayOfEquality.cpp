/* 758A_Holiday_Of_Equality
author: Tanzirul Islam*/

#include <bits/stdc++.h>
using namespace std;
int main()
{
    int citizen_num, max_num = INT_MIN, sum = 0, initial_sum = 0;
    cin >> citizen_num;
    vector<int> initial_amounts(citizen_num);
    for (int i = 0; i < citizen_num; i++)
    {
        cin >> initial_amounts[i];
        if (max_num < initial_amounts[i])
            max_num = initial_amounts[i];
    }

    for (int i = 0; i < citizen_num; i++)
    {
        initial_sum = max_num - initial_amounts[i];
        sum = sum + initial_sum;
    }
    cout << sum << endl;
}
