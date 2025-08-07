/* 282A_Bit++ 
   author-> Hustler
*/
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int operation_times;
    int x = 0;
    string s;
    cin >> operation_times;
    while (operation_times--)
    {
        cin >> s;
        if (s[1] == '+')
        {
            ++x;
        }
        else
        {
            x--;
        }
    }
    cout << x << endl;
}