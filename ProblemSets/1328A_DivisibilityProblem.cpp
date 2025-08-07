// #include <bits/stdc++.h>
// using namespace std;

// int main()
// {
//     int test;
//     cin >> test;
//     while (test--)
//     {
//         long long int a, b;
//         cin>>a>>b;
//         long long int count = 0;
//         while (a % b != 0)
//         {
//             a = a + 1;
//             count++;

//         }
//         cout << count<<endl;
//     }
// }

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int test;
    cin >> test;
    while (test--)
    {
        long long int a, b, c, d, e;
        cin >> a >> b;
        if (a % b != 0)
        {
            c = a / b;
            c = c + 1;
            d = b * c;
            e = d - a;
            cout << e << endl;
        }
        else
        {
            cout << "0" << endl;
        }
    }
}