/*
Problem: 1807A_Plus_or_Minus
SOlver: Tanzirul_Islam
*/

#include <bits/stdc++.h>
using namespace std;
int main()
{
    int test;
    cin >> test;
    while (test--)
    {
        vector<int> distances(6);
        for (int i = 0; i < 3; i++)
        {
            cin >> distances[i];
        }

        if (distances[0] + distances[1] == distances[2])

            cout
                << "+" << endl;
        if (distances[0] - distances[1] == distances[2])
            cout << "-" << endl;
    }
}