#include <bits/stdc++.h>
using namespace std;

int main()
{
    int num, height;
    cin >> num >> height;
    int width1 = 0, width2 = 0;
    int i; 
    int currentheight;
    for (i = 1; i <= num; i++)
    {
        cin >> currentheight;
        if (currentheight > height)
        {
            width1 = width1 + 2;
        }
        else
        {
            width2++;
        }
    }
    cout << width1 + width2;
}