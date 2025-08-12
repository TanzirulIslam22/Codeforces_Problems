#include <bits/stdc++.h>
using namespace std;
int main() /// NOT solved or, submitted!!!!
{
    int test;
    cin >> test;
    while (test--)
    {
        int n, count = 0; // size = n
        cin >> n;
        vector<int> arr1(n), arr2(n);
        for (int i = 0; i < n; i++)
        {
            cin >> arr1[i];
            cin >> arr2[i];
            if (arr1[i] != arr2[i])
            {
                if (arr1[i] > arr2[i])
                {
                    arr1[i]--;
                }
                if (arr1[i] < arr2[i])
                {
                    arr1[i]++;
                }
                count++;
            }
        }
        cout << count << endl;
    }
}