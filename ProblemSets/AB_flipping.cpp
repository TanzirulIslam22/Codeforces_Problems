#include <bits/stdc++.h>
using namespace std;
void swap(string &str, int length, int &count)
{
    for (int i = 0; i <= length - 1; i++)
    {
        if (str[i] != str[i + 1])
        {
            swap(str[i], str[i + 1]);
            count++;
        }
    }
}

int main()
{
    int test;
    cin >> test;
    while (test--)
    {
        int length;
        cin >> length;

        string str;
        cin >> str;
        int count = 0;
        swap(str, length, count);
        cout << count << endl;
    }
    return 0;
}