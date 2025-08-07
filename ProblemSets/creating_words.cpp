#include <bits/stdc++.h>
using namespace std;

void swap(string a, string b)
{
    int temp;
    temp = a[0];
    a[0] = b[0];
    b[0] = temp;
}
int main()
{
    int test;
    cin >> test;
    while (test--)
    {
        string a, b;
        cin >> a >> b;
        swap(a[0], b[0]);
        cout << a << " " << b << endl;
    }
}