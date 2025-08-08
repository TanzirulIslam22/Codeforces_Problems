/*
Problem: 50A_Domino_Piling
Solver: Tanzirul_Islam
*/

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int area_of_domino = 2; // 2*1=2;

    int M, N;
    cin >> M >> N;
    cout << ((M * N) / area_of_domino) << endl;
}