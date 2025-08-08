/*
Problem: 1703A_YES_OR_YEs?
SOlver: Tanzirul_Islam
*/

/*------------>My way<-------------*/

#include <bits/stdc++.h>
using namespace std;
int main()
{
    int test;
    cin >> test;
    while (test--)
    {
        string str;
        cin >> str;

        if (str == "YES" || str == "yES" || str == "Yes" || str == "yes" || str == "YeS" || str == "yEs" || str == "YEs" || str == "yeS")

            cout
                << "YES" << endl;
        else
            cout << "NO" << endl;
    }
}

/*------------>Done by converting into the Uppercase<-------------*/
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int test;
    cin >> test;
    while (test--)
    {
        string str;
        cin >> str;

        for (char &c : str)
            c = toupper(c);

        if (str == "YES")
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }
}

/*------------>Done by converting into the lowercase<-------------*/

#include <bits/stdc++.h>
using namespace std;
int main()
{
    int test;
    cin >> test;
    while (test--)
    {
        string str;
        cin >> str;

        for (char &c : str)
            c = tolower(c);

        if (str == "yes")
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }
}