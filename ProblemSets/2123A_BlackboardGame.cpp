/*2123A_Blackboard_Game
author: Tanzirul_Islam*/

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
        if (n % 4 == 0)
            cout << "Bob" << endl;
        else
            cout << "Alice" << endl;
    }
}