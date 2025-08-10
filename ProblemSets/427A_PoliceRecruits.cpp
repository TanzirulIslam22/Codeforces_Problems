/*Problem: 427A_Police_Recruits
Author: Tanzirul_Islam*/

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int numbers, events, count = 0, polices = 0;
    cin >> numbers;
    for (int i = 0; i < numbers; i++)
    {
        cin >> events;

        if (events == -1)
        {
            if (polices > 0)
                polices--;
            else
                count++;
        }
        else
        {
            polices = polices + events;
        }
    }
    cout << count << endl;
}