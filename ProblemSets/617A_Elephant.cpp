/*
Problem: 617A_Elephant
Solver: Tanzirul_Islam
*/

#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, reminder;
    cin >> n;
    if (n % 5 == 0)
    {
        cout << (n / 5) << endl;
    }
    else
    {
        cout << (n / 5) + 1 << endl;
    }
}

//--------->pending problem solved :)