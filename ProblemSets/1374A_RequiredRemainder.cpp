// #include <bits/stdc++.h>               //TIME LIMIT EXCEEDED
// using namespace std;

// int main()
// {
//     int test;
//     cin >> test;
//     while (test--)
//     {
//         long long int x, y, n, k = 0, temp; // a=dq+r; discrete Mathematics
//         cin >> x >> y >> n;

//         for (int i = 0; i <= n / x; i++)
//         {
//             temp = (x * i) + y;
//             if (temp <= n)
//             {
//                  k=temp;
//             }
//             else
//             {
//                 break;
//             }
//         }

//         cout << k << endl;
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
        long long int x, y, n, k = 0, i;
        cin >> x >> y >> n;
        i = (n - y) / x;
        k = x * i + y;

        cout << k << endl;
    }
}
