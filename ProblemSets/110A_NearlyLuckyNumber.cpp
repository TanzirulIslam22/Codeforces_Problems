/*
Problem: 110A_Nearly_Lucky_Number
Solver: Tanzirul_Islam
*/

#include <bits/stdc++.h>
using namespace std;
int main()
{
    string num;
    cin >> num;
    int countLucky = 0;

    // for (int i = 0; i < num.length(); i++)
    // {
    //     if (num[i] == '4' || num[i] == '7')
    //     {
    //         countLucky++;
    //     }
    // }

        /*--->exploring new way of for loop<----*/

    for (char ch : num)
    {
        if (ch == '4' || ch == '7')
        {
            countLucky++;
        }
    }
    if (countLucky == 4 || countLucky == 7)
        cout << "YES" << endl;

    else
    {
        cout << "NO" << endl;
    }
}
