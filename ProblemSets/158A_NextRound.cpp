#include <bits/stdc++.h>
using namespace std;       ///wrong!!!!!!!!!!!!!!!

int main()
{
    int n, k, num, kth_value, count = 0;
    cin >> n >> k;

    for (int i = 1; i <= n; i++)
    {
        cin >> num;
        if(num==0)
        {
            return 0;
        }
        if (i == k)
            kth_value = num; // Store the k-th position value

        if (i < k || num == kth_value)
            count++;
    }
    cout << count << endl;
}
