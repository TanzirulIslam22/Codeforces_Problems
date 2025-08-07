/*
Problem: 1676A_Lucky?
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

        string number;
        cin >> number; // string i/p to access numbers

        vector<int> distances(6);
        for (int i = 0; i < 6; i++)
        {
            distances[i] = number[i] - '0'; // converting char to int ; '0'= 48

            // ASCII of number[i] - ASCII of '0'---> this explains the uper line
        }

        if ((distances[0] + distances[1] + distances[2]) == (distances[3] + distances[4] + distances[5]))

            cout
                << "YES" << endl;
        else
            cout << "NO" << endl;
    }
}