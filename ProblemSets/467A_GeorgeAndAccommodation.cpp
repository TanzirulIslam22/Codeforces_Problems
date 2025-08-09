/*Problem: 467A_George_and_accommodation
Author: Tanzirul_Islam*/

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int rooms, living_person, can_live, count = 0;
    cin >> rooms;
    for (int i = 0; i < rooms; i++)
    {
        cin >> living_person >> can_live;

        if (can_live - living_person >= 2) // need to empty space at least
        {
            count++;
        }
    }
    cout << count << endl;
}