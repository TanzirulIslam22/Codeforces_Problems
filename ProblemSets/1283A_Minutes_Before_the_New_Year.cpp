/*
1283A_Minutes Before the new year.
*/

/*
most easiest way:
int minutes_left = (23 - h) * 60 + (60 - m);
cout << minutes_left << endl; // Add 'endl' or '\n' to print each result on a new line
*/


//the way I solved.
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int test;
    cin >> test;
    while (test--)
    {
        int h, m, h1, m1;
        cin >> h >> m;
        if (h > 0 && h < 23)
        {
            h1 = 23 - h;
            m1 = 60 - m;
            h1 = h1 * 60;
            m1 = m1 + h1;
            cout << m1<<endl;;
        }

        else if (h == 0)
        {

            h1 = 23 * 60;
            m = 60 - m;
            m1 = h1 + m;
            cout << m1<<endl;
        }
        else
        {
            m1 = 60 - m;
            cout << m1<<endl;
        }
    }
}