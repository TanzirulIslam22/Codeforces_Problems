#include <bits/stdc++.h>

using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        vector<int> a(n);
        for (int i = 0; i < n; ++i)
        {
            cin >> a[i];
        }

        // Required counts: 0:3, 1:1, 2:2, 3:1, 5:1
        vector<int> required(10, 0);
        required[0] = 3;
        required[1] = 1;
        required[2] = 2;
        required[3] = 1;
        required[5] = 1;

        vector<int> current(10, 0);
        int result = 0;
        for (int i = 0; i < n; ++i)
        {
            int digit = a[i];
            current[digit]++;

            // Check if all required digits are satisfied
            bool all_satisfied = true;
            for (int d = 0; d < 10; ++d)
            {
                if (required[d] > 0 && current[d] < required[d])
                {
                    all_satisfied = false;
                    break;
                }
            }

            if (all_satisfied)
            {
                result = i + 1;
                break;
            }
        }

        cout << result << endl;
    }
    return 0;
}