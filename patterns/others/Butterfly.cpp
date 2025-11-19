#include <bits/stdc++.h>
using namespace std;

int main()
{
    /*
    for n = 5
     *    *
     **  **
     ******
     **  **
     *    *

    for n = 7
     *     *
     **   **
     *** ***
     *******
     *** ***
     **   **
     *     *
     */
    int n;
    cout << "Enter number of rows: ";
    cin >> n;
    for (int i = 0; i <= n / 2; i++)
    {
        for (int j = 0; j <= i; j++)
        {
            cout << "* ";
        }
        for (int j = 0; j < ((n / 2) - i) * 2; j++)
        {
            cout << "  ";
        }
        for (int j = 0; j <= i; j++)
        {
            cout << "* ";
        }
        cout << endl;
    }
    for (int i = (n / 2) - 1; i >= 0; i--)
    {
        for (int j = i; j >= 0; j--)
        {
            cout << "* ";
        }
        for (int j = ((n / 2) - i) * 2; j > 0; j--)
        {
            cout << "  ";
        }
        for (int j = i; j >= 0; j--)
        {
            cout << "* ";
        }
        cout << endl;
    }
    return 0;
}