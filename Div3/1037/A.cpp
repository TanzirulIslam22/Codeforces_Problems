#include <bits/stdc++.h>
using namespace std;

int main()
{
    int test;
    cin >> test;
    while (test--)
    {
        int n;
        cin >> n;
        int largest = 0;
        int smallest = 9;
        while (n)
        {
            int r = n % 10;

            // // Find the largest digit
            // largest = max(r, largest);

            // // Find the smallest digit
            smallest = min(r, smallest);

            n = n / 10;
        }
        cout << smallest << endl;
    }
}
