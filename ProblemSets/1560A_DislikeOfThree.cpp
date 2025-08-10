/* 1506A_Dislike_Of_Three
author: Tanzirul Islam*/

#include <bits/stdc++.h>
using namespace std;

bool disliked(int x) {
    if (x % 3 == 0) return true;
    if (x % 10 == 3) return true;
    return false;
}

int main() {
    int t;
    cin >> t;

    while (t--) {
        int k;
        cin >> k;

        int count = 0;
        int num = 0;
        while (count < k) {
            num++;
            if (!disliked(num)) {
                count++;
            }
        }
        cout << num << "\n";
    }

    return 0;
}