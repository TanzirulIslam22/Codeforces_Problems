// A. Kevin and Combination Lock

#include <bits/stdc++.h>
using namespace std;
int main()
{
    int test;
    cin >> test;
    while (test--)
    {
        int x;
        cin >> x;
        if (x % 33 == 0)
        {
            x = x / 33;
            cout << "yes";
            break;
        }
        else
        {
            string str = to_string(x);
            for (int i = 0; i < str.length() - 1; i++)
            {
                if (str[i] == 3 && str[i + 1] == 3)
                {
                    str.erase(i, 2);
                    i -= 1; // Adjust index to recheck current position
                    if (i < -1)
                        i = -1;
                }
            }
            cout << str;
              else
                {
                    int x = stoi(str);
                    while (x)
                    {
                        x = x / 33;
                        cout << "yes";
                        break;
                    }
                }
        }
    }
}