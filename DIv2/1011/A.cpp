#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

bool isUniversal(const string& s) {
    string reversed = s;
    reverse(reversed.begin(), reversed.end());
    return s < reversed;
}

int minSwapsToUniversal(const string& s) {
    string reversed = s;
    reverse(reversed.begin(), reversed.end());
    int swaps = 0;
    for (int i = 0; i < s.length(); ++i) {
        if (s[i] != reversed[i]) {
            swaps++;
        }
    }
    return swaps / 2;
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, k;
        cin >> n >> k;
        string s;
        cin >> s;
        
        if (isUniversal(s)) {
            cout << "YES" << endl;
            continue;
        }
        
        int requiredSwaps = minSwapsToUniversal(s);
        if (requiredSwaps <= k) {
            cout << "YES" << endl;
        } else {
            cout << "NO" << endl;
        }
    }
    return 0;
}