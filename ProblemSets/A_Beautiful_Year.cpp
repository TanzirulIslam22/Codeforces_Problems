/*
set<char> digits(str.begin(), str.end());
if (digits.size() == 4)                    // All digits are unique
*/

#include <bits/stdc++.h>
using namespace std;
int main()
{
    int year;
    cin >> year;

    for (int i = 1000; ; i++)
    {
        if (year < i)
        {
            string str = to_string(i);
            if (str[0] != str[1] && str[1] != str[2] && str[2] != str[3] &&
                str[0] != str[2] && str[0] != str[3] && str[1] != str[3])
            {
                int outcome = stoi(str);
                cout << outcome << endl;
                break;
            }
        }
    }
}

// //more optimized
// #include <bits/stdc++.h>
// using namespace std;

// int main()
// {
//     int year;
//     cin >> year;

//     for (int i = year + 1; i <= 9999; i++) // Start from year + 1 and limit to 9999
//     {
//         string str = to_string(i);
//         set<char> digits(str.begin(), str.end());
//         if (digits.size() == 4) // Check if all digits are unique
//         {
//             cout << i << endl; // Print the result
//             break;            // Exit the loop
//         }
//     }

//     return 0;
// }
