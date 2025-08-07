/*
Problem: 1692A_Marathon
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
        int count = 0;

        vector<int> distances(4);
        for (int i = 0; i < 4; i++)
        {
            cin >> distances[i];
        }

        for (int i = 0; i < 4; i++)
        {

            if (distances[0] < distances[i])
                count++;
        }
        cout << count << endl;
    }
}