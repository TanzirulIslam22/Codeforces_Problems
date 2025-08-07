#include <bits/stdc++.h>
using namespace std;

int main()
{
    long long n;

    cin >> n;
    if (n % 2 == 0)
    {
        cout << n / 2;
    }
    else
    {
        cout << -(n / 2 + 1);
    }
}

// Time limit will be exceeded

// for (int i = 1; i <= a; i++)
//     {

//         b = i * pow(-1, i);
//         sum = sum + b;
//     }