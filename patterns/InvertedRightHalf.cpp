#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cout << "Enter number of Rows: ";
    cin >> n;

    /* Patter 1: Stars
     * * * * *
     * * * *
     * * *
     * *
     *
     */
    cout << "Stars: " << endl;
    for (int i = n; i > 0; i--)
    {
        /*The outer loop is iterated from n to 0 so that when we use j = i, it runs from n to 1 times*/
        for (int j = i; j > 0; j--)
            cout << "* ";
        cout << endl;
    }

    /* Pattern 2: Numbers 1
    5 4 3 2 1
    4 3 2 1
    3 2 1
    2 1
    1
    */
    cout << "Numbers 1: " << endl;
    for (int i = n; i > 0; i--)
    {
        for (int j = i; j > 0; j--)
            cout << j << " ";
        cout << endl;
    }
    return 0;
}