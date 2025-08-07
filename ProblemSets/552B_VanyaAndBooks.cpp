#include <bits/stdc++.h>
using namespace std;

int main()
{
    long long int number_of_books=0, sum_of_length = 0, digits_needed = 0;
    cin >> number_of_books;

    // if (number_of_books < pow(10, 1) )
    // {
    //     number_of_books = digits_needed;
    //     cout << digits_needed << endl;
    // }

    // else if (number_of_books < pow(10, 2) && number_of_books>pow(10,1))
    // {
    //     digits_needed=pow(10,2)-pow(10,1);
    //     cout << digits_needed << endl;
    // }
    // else{
    //     return
    // }

    for (long long int i = 1; i <= number_of_books; i++)
    {
        sum_of_length = to_string(i).length(); // Convert integer to string
        digits_needed = digits_needed + sum_of_length;
    }
    cout << digits_needed << endl;
    return 0;
}
