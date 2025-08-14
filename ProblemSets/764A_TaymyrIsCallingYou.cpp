/* 764A_Taymyr_Is_Calling_You
author: Tanzirul_Islam*/

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, m, z, count = 0;
    cin >> n >> m >> z;

    vector<int> a;
    vector<int> b;

    for (int i = n; i <= z; i += n)
    {
        a.push_back(i);
    }

    for (int i = m; i <= z; i += m)
    {
        b.push_back(i);
    }

    for (int x : a)
    {
        for (int y : b)
        {
            if (x == y)
            {
                count++;
            }
        }
    }

    cout << count << endl;
}


/*
//easy way
#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, m, z;
    cin >> n >> m >> z;
    int l = lcm(n, m); // C++17 has std::lcm
    cout << z / l << endl;
}
*/