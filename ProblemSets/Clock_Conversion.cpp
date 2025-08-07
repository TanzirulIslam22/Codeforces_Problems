#include <bits/stdc++.h>
using namespace std;

int main()
{
    int test;
    cin >> test;
    while (test--)
    {
        string time;
        cin >> time;
        if (time.length() == 5 && time[2] == ':')
        {
            string hours_str = time.substr(0, 2);
            string minutes = time.substr(3, 2);
            int hours = stoi(hours_str);

            if (hours < 10 && hours > 00)
            {
                cout << "0" << hours << ":" << minutes << " AM" << endl;
            }
            else if (hours < 12 && hours > 10)
            {
                cout << hours << ":" << minutes << " AM" << endl;
            }
            else if (hours == 12)
            {
                cout << hours << ":" << minutes << " PM" << endl;
            }
            else if (hours == 10)
            {
                cout << hours << ":" << minutes << " AM" << endl;
            }
            else if (hours == 00)
            {
                hours = 12;
                cout << hours << ":" << minutes << " AM" << endl;
            }
            else if (hours < 22)
            {
                hours = hours % 12;
                cout << "0" << hours << ":" << minutes << " PM" << endl;
            }
            else
            {
                hours = hours % 12;
                cout << hours << ":" << minutes << " PM" << endl;
            }
        }
    }
}