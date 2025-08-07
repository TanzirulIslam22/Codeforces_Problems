#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int m, c;
    int M_win = 0, C_win = 0, draw = 0;
    for (int i = 0; i < n; i++)
    {
        cin >> m >> c;

        if (m > c)
            M_win++;
        else if (m < c)
            C_win++;
        else if (m == c)
            draw++;
    }
    if (draw == n || M_win == C_win /*bug || (M_win+C_win==n)*/)
        cout << "Friendship is magic!^^";
    else if (M_win > C_win)
        cout << "Mishka";
    else
        cout << "Chris";

    cout << endl;
    return 0;
}