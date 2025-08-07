#include <bits/stdc++.h>
using namespace std;
int main()
{
    int k, n, w;
    int s=0, borrow;
    cin >> k >> n >> w;
    for (int i = 1; i <= w; i++)
    {
        s += k * i;
    }
    borrow = s - n;
    if (borrow > 0)
        cout << borrow;
    else
        cout << 0;
}