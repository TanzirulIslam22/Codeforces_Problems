/*
Problem: 1030A_In Search of an Easy Problem
Solver: Tanzirul_Islam
 */

#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, values;
    bool OneisHere = false;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> values;
        if (values == 1)
            OneisHere = true;
    }
    if (OneisHere)
        cout << "HARD" << endl;
    else
        cout << "EASY" << endl;
}