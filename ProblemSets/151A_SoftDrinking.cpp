/*Problem: 151A_Soft_Drinking
Author: Tanzirul_Islam*/

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, k, l, c, d, p, nl, np;
    cin >> n >> k >> l >> c >> d >> p >> nl >> np;

    int total_ml = 0, per_per_mg = 0, total_possible_lime_slices = 0, total_possible_from_salt = 0, total_possible_toasts;

    total_ml = k * l;
    per_per_mg = total_ml / nl;
    total_possible_lime_slices = c * d;
    total_possible_from_salt = p / np;

    total_possible_toasts = min(per_per_mg, min(total_possible_lime_slices, total_possible_from_salt));

    cout << (total_possible_toasts / n) << endl;
}